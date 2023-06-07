class Solution {
  public:
    int prime(int n){
           if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        
        for(int i=2;i<=n;i++){
            if(n%i==0){
                return i;
            }
        }
    }
    vector<int> leastPrimeFactor(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(prime(i));
        }
        
        return ans;
    }
};
