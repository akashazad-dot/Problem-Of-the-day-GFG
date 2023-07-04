class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        // int count=0;
        
        // for(int i=0;i<a.size();i++){
        //     int prod=1;
        //   for(int j=i;j<a.size();j++){
        //       prod*=a[j];
        //       if(prod<k){
        //           count++;
        //       }
        //   }
           
        // }
        // return count;
        
        int count=0;
        long prod=1;
        int i=0,j=0;
        
        while(j<n){
            prod=prod*a[j];
            while(prod>=k && i<=j){
                prod=prod/a[i];
                i++;
            }
            count+=(j-i+1);
            
            j++;
        }
        
        return count;
    }
};
