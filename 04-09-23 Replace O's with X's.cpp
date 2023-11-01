// User function Template for C++

class Solution{
private:
    void dfs(int r,int c,vector<vector<int>> & vis,vector<vector<char>> & mat,int delrow[],int delcol[]){
        vis[r][c]=1;
        
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<4;i++){
            int nrow=r+delrow[i];
            int ncol=c+delcol[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]=='O'){
                dfs(nrow,ncol,vis,mat,delrow,delcol);
            }
        }
        
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {   
        int delrow[4]={-1,0,1,0};
        int delcol[4]={0,1,0,-1};
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            if(!vis[0][i] && mat[0][i]=='O'){
                dfs(0,i,vis,mat,delrow,delcol);
            }
            if(!vis[n-1][i] && mat[n-1][i]=='O'){
                dfs(n-1,i,vis,mat,delrow,delcol);
            }
        }
        
        for(int j=0;j<n;j++){
            if(!vis[j][0] && mat[j][0]=='O'){
                dfs(j,0,vis,mat,delrow,delcol);
            }
            
            if(!vis[j][m-1] && mat[j][m-1]=='O'){
                dfs(j,m-1,vis,mat,delrow,delcol);
            }
        }
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]=='O'){
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};
