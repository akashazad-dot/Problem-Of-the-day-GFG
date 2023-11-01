class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<vector<int>>ans;
        map<int,vector<int>>map;
        
        for(int i=0;i<edges.size();i++){
            pair<int,int> curr=edges[i];
            map[curr.first].push_back(curr.second);
            map[curr.second].push_back(curr.first);
        }
        
        for(int i=0;i<V;i++){
            ans.push_back(map[i]);
        }
        
        return ans;
        
    }
};
