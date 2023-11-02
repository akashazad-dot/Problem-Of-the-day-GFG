class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int xi=-1,yi=-1,ans=n+1;
        
        for(int i=0;i<n;i++){
            if(a[i]==x){
                xi=i;
            }
            else if(a[i]==y){
                yi=i;
            }
            
            if(xi!=-1 && yi!=-1){
                int diff=abs(xi-yi);
                ans=min(diff,ans);
            }
        }
        
        return ans==n+1?-1:ans;
    }
};
