class Solution {
public:

    // @func mapParent
    // This function maps `node` to its `parent` using map `parent`
    // and finds target node `targetNode`
    // This is a DFS function
    void mapParent(Node* node, Node* parentNode, map<Node*, Node*>&parent, int target, Node* &targetNode){
        if(node == NULL)
            return;
        
        // Assign `parentNode` as parent of `node`     
        parent[node] = parentNode;
        
        // Get the targetNode
        if(!targetNode && node->data == target)
            targetNode = node;
        
        mapParent(node->left, node, parent, target, targetNode);
        mapParent(node->right, node, parent, target, targetNode);
    }
    
    vector<int> KDistanceNodes(Node* root, int target , int k){
        vector<int> ans;

        // @param parent
        // Mapping between node and its parent node
        map<Node*, Node*> parent;

        // @param targetNode
        // Node with target value
        Node *targetNode = NULL;
        mapParent(root, NULL, parent, target, targetNode);

        // @param q
        // Queue stores the node and its distance from target node `t`
        // Used in BFS
        queue<pair<Node*,int>> q;
        q.push({targetNode,0});
        
        // @param vis
        // Keeps track of visited nodes while BFS
        map<Node*,bool> vis;
        vis[targetNode] = true;

        // Modified BFS (Breadth-First search)
        // 
        // Generally in BFS, we donot maintain visited nodes
        // but, in this case we are also travelling upwards towards the parent node
        // and simultaneously visiting child nodes
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int dist;   // Distace from targetNode
                Node* node; // Current node
                
                tie(node, dist) = q.front();
                q.pop();
                
                if(dist == k){
                    ans.push_back(node->data);
                }else if(dist < k){
                    if(node->left && !vis[node->left]){
                        q.push({node->left, dist+1});
                        vis[node->left] = true;
                    }
                    if(node->right && !vis[node->right]){
                        q.push({node->right, dist+1});
                        vis[node->right] = true;
                    }
                    if(parent[node] && !vis[parent[node]]){
                        q.push({parent[node], dist+1});
                        vis[parent[node]] = true;
                    }
                }
            }
        }
        
        // Question asks to return answer in sorted order
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};
