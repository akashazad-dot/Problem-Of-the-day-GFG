
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        sort(arr,arr+n);
        
        // for(int i=0;i<n;i++){
        //     if(arr[i]>=0){
        //         if(arr[i]!=arr[i+1] && arr[i]+1!=arr[i+1] || arr[i]!=0){
        //             return arr[i]+1;
        //         }
        //     }
        // }
        
        int count=1;
        for(int i=0;i<n;i++){
            if(arr[i]==count){
                count++;
            }
        }
        return count;
    } 
};
