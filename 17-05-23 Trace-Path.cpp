class Solution{
public:
    int isPossible(int n, int m, string s){
        int lowr=0,lowc=0,highr=0,highc=0,r=0,c=0;
        
        for(auto i:s){
            if(i=='L'){
                c--;
            }
            else if(i=='R'){
                c++;
            }
            else if(i=='U'){
                r--;
            }
            else{
                r++;
            }
        lowr=min(lowr,r);
        lowc=min(lowc,c);
        highr=max(highr,r);
        highc=max(highc,c);
        }
            
    if(highr-lowr<n && highc-lowc<m){
        return 1;
    }
    else return 0;
    }

};
