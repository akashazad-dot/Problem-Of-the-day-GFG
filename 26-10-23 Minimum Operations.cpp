class Solution
{
  public:
    int minOperation(int n)
    {
        vector<int> dp(n+1,0);
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        
        for(int i = 4 ; i <= n ; i++){
            if(i%2 == 0){
                dp[i] = dp[i/2]+1;
            }
            else{
                dp[i] = 2+dp[i/2];
            }
        }
        return dp[n];
    }

 
};
