class Solution{
    
    public:
    // Your are required to complete this function
    // function should return root of the modified BST
    void inorder(Node* root,vector<Node*>& tree){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,tree);
        tree.push_back(root);
        inorder(root->right,tree);
    }
    
    Node* solve(vector<Node*>& tree,int s,int e){
        if(s>e){
            return NULL;
        }
        
        int mid=(s+e)/2;
        
        Node *root=tree[mid];
        root->left=solve(tree,s,mid-1);
        root->right=solve(tree,mid+1,e);
        
        return root;
    }
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<Node*>tree;
    	inorder(root,tree);
    	return solve(tree,0,tree.size()-1);
    }
};
