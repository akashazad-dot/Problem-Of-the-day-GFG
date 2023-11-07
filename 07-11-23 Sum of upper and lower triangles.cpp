class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
   vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int s=0,d=0,l=0,u=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                s=s+matrix[i][j];
                if(i==j)
                d+=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for( int j=0;j<=i;j++)
            {
                l+=matrix[i][j];
            }
        }
        u=s-l+d;
        v.push_back(u);
        v.push_back(l);
        return v;
        
    }


};
