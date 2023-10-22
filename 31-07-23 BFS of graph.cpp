class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
   vector<int> bfsOfGraph(int V, vector<int> adjList[]) {
        
        queue<int>q;
        // unordered_map<int, bool>visited;
        
        q.push(0);
        vector<int>ans;
        
        vector<bool>visited(V, false);
        
        visited[0] = true;
        
        while(!q.empty()){
            
            int frontNode  =q.front();
            q.pop();
            
           ans.push_back(frontNode);
            
            // Insert Neighbour 
            
            for(auto neighbour: adjList[frontNode])
            
            {
                
                if(!visited[neighbour]){
                    
                    q.push(neighbour);
                    
                    visited[neighbour] = true;
                }
            }
        }
        
       return ans;
    }

};
