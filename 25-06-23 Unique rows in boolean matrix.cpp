class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int m[MAX][MAX],int row,int col)
    {
        //Your code here
        vector<vector<int>> ans;
        set<vector<int>> s;
        for(int i=0;i<row;i++){
            vector<int> v;
            for(int j=0;j<col;j++){
                v.push_back(m[i][j]);
            }
            if(s.find(v)==s.end()){
              ans.push_back(v);
              s.insert(v);
            }
        }
        return ans;
    }

};
