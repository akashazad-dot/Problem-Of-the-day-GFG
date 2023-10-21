class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        
        long long ans=0;
        for(int i=1;i<=N;i++){
            int x=N/i;
            ans=ans+x*i;
        }
        
        return ans;
    }
};
