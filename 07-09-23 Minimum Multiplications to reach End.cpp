// User function Template for C++

const int c = 1e5;
class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        if(start==end)return 0;
        queue<int>q;
        q.push(start);
        int count=0;
        vector<int>vis(1e5+1,0);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                int t=q.front();
                q.pop();
                for(auto val:arr){
                    if((val*t)%c != end and vis[(val*t)%c]==0){
                        q.push((val*t)%c);
                        vis[(val*t)%c]=1;
                    }
                    else if((val*t)%c==end){
                        return count+1;
                    }
                }
            }
            count++;
        }
        if(start==end)return 0;
        return -1;
    }
};
