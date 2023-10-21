//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
    //     sort(arr,arr+n);
    //     int arr1[n+1];
    //     // int count;
    //     for(int i=0;i<n;i++){
    //         // count=0;
    //         if(arr[i+1]==arr[i]){
    //             // count++;
    //             // ans.push_back(count);
    //             arr1[i-1]++;
    //         }
          
    //     }
    //     for(int i=0;i<n;i++){
    //         if(i==i+1 || arr[i]==0){
    //             continue;
    //         }
    //         if(arr1[i]==arr1[i+1]){
    //             return false;
    //         }
    //     }
    //     return true;
    // 
    
        unordered_map<int,int>m;
        set<int>s;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        for(auto x:m){
            if(s.find(x.second)!=s.end()){
                return false;
            }
            s.insert(x.second);
        }
        return true;
    }
    
};
