//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int ans=-1;
    unordered_map<char,int>mp;
    int j=0;
    
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
        if(mp.size()==k){
            ans=max(ans,i-j+1);
        }
        if(mp.size()>k){
            mp[s[j]]--;
            if(mp[s[j]]==0){
                mp.erase(s[j]);
            }
            j++;
        }
    }
    return ans;
    }
};
