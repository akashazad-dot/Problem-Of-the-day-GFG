class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // int maxi=-1;
        //  for(int i=0;i<n;i++){
        //      for(int j=0;j<n;j++){
        //          if(arr[i]<=arr[j]){
        //             maxi=max(j-i,maxi);       
        //          }
        //      }
        //  }
         
        //  return maxi;
        
        int arr1[n];
        for(int i=0;i<n;i++){
            arr1[i]=arr[i];
        }
        
        sort(arr1,arr1+n);
        
        int k=n-1;
        int i=0;
        int j=n-1;
        int ans=0;
        
        while(i<j){
            if(arr[i]<=arr[j]){
                ans=max(ans,j-i);
                i++;
                j=n-1;
            }
            else if(arr[i]==arr1[k]){
                k--;
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }

};
