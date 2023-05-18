  int d[5] = {0,-1,0,1,0};
    void removeIsland(int i, int j, vector<vector<int>>&a, int n, int m)
    {
        if(i<0 || i==n || j<0 || j==m || a[i][j]==0) return;
        a[i][j]=0;
        for(int k=0;k<4;k++)
            removeIsland(i+d[k],j+d[k+1],a,n,m);
    }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
        vector<vector<int>> a = matrix;
        for(int i=0;i<N;i++)
        {
            if(a[i][0]==1)
                removeIsland(i,0,a,N,M);
            if(a[i][M-1]==1)
                removeIsland(i,M-1,a,N,M);
        }
        for(int j=0;j<M;j++)
        {
            if(a[0][j]==1)
                removeIsland(0,j,a,N,M);
            if(a[N-1][j]==1)
                removeIsland(N-1,j,a,N,M);
        }
        //counting the closed islands
        int countIsland = 0;
        for(int i=0;i<N;i++)
            for(int j=0;j<M;j++)
            {
                if(a[i][j]==1)
                {
                    countIsland++;
                    removeIsland(i,j,a,N,M);
                }
            }
        return countIsland;
    }
