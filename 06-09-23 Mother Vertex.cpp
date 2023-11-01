
class Solution 
{
    private:
        void dfs(int V, vector<int> adj[], vector<bool>& vis, int i, int &c){
            vis[i]=true;
            c++;
            for(const auto& it: adj[i]){
                if(!vis[it]){
                    dfs(V, adj, vis, it, c);
                }
            }
            
        }
        
    public:
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    vector<bool> vis(V, false);
	    int ans;
	    int c=0;
	    for(int i=0; i<V; ++i){
	        if(!vis[i]){
	            dfs(V, adj, vis, i, c);
	            ans=i;
	            c=0;
	        }
	    }
	    vis.assign(V, false);
	    dfs(V, adj,vis, ans, c);
	    if(c==V) return ans;
	    return -1;
	}

};
 
