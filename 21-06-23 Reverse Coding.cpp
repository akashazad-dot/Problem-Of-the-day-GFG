class Solution {
  public:
    int sumOfNaturals(int n) {
    // int sum = 1e9 + 7;
    // return (1LL*n*(n+1)/2)%sum;
    int mod=1e9+7;
    int first=n%mod;
    int Second=(n+1)%mod;
    
    long long ans=(1L*first*Second)/2;
    
    return int (ans%mod);
    
    }
};
