class Solution {
  public:
  int isPossible(int n, int v[]) {
        int sum=0;
        for(int i=0; i<n; i++) {
            int x=0;
            while(v[i]) x += v[i]%10, v[i] /= 10;
            sum+=x;
        }
        return sum%3==0;
    }
   
    
};
