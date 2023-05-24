class Solution {
  public:
 int getMaximum(int N, vector<int> &arr) {
        // code here
        long int sum=0;
        int k=N;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
       
        while(k>1)
        {
            if(sum%k==0)
            break;
            k--;
        }
        return k;
        
        
    }
};
