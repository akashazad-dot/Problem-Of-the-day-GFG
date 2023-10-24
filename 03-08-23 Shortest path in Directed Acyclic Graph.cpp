// User function Template for C++
class Solution {
  public:
   vector<int> shortestPath(int n,int m, vector<vector<int>>& edges){
        vector<int>dist(n, 1e8);
        dist[0] = 0;
        
        for(int i=0; i<m; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int cost = edges[i][2];
            if(dist[v]>cost+dist[u])
                dist[v] = cost+dist[u];
        }
        
        for(int val=0; val<dist.size(); val++)
            if(dist[val]==1e8)
                dist[val] = -1;
                
        return dist;
    }
};
