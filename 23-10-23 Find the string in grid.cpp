class Solution {
public:
    
    bool dfs(int i,int j,int dir_x,int dir_y,vector<vector<char>>&grid,int start,string word){
        if(start>=word.size()){
            return true;
        }
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()){
            return false;
        }
        
        if(grid[i][j]==word[start]){
            return dfs(i+dir_x,j+dir_y,dir_x,dir_y,grid,start+1,word);
        }else{
            return false;
        }
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    int dx[8]={-1,0,1,0,1,1,-1,-1};
	    int dy[8]={0,-1,0,1,1,-1,1,-1};
	    
	    vector<vector<int>>ans;
	    
	    for(int i=0;i<grid.size();i++){
	        for(int j=0;j<grid[0].size();j++){
	            if(grid[i][j]==word[0]){
	                for(int k=0;k<8;k++){
	                    if(dfs(i+dx[k],j+dy[k],dx[k],dy[k],grid,1,word)){
	                        ans.push_back({i,j});
	                        break;
	                    }
	                }
	            }
	        }
	    }
	    return ans;
	}
};
