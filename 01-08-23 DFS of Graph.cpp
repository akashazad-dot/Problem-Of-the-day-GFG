class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
     queue<int> q;
    void dfsf(vector<int> adj[],vector<bool>& visited,vector<int>& ans){
        int temp=q.front();
        q.pop();
        ans.push_back(temp);
        for(int i=0;i<adj[temp].size();i++){
            if(!visited[adj[temp][i]]){
                visited[adj[temp][i]]=1;
                q.push(adj[temp][i]);
                dfsf(adj,visited,ans);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V,0);
        vector<int> ans;
        visited[0]=1;
        q.push(0);
        dfsf(adj,visited,ans);
        return ans;
    }
};
