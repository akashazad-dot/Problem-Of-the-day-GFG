class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
            
    int ans=INT_MAX;

    sort(a.begin(),a.end());

    for(int i=0;i<=n-m;i++){

        int min=a[i];

        int max=a[i+m-1];

        int gap=max-min;

        if(gap<ans){

            ans=gap;

        }

    }

    return ans;
    }   
};
