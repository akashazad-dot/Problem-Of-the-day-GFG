class Solution {
  public:
 string longestPalin (string S) {
        // code here
        string ans="";
        int len=0;
        for(int i=0;i<S.size();i++)
        {
            int left=i,right=i;
            while(left>=0 && right<S.size() && S[left]==S[right])
            {
                if((right-left+1)>len)
                {
                    len=right-left+1;
                    ans=S.substr(left,right-left+1);
                }
                left--;
                right++;
            }
            int l=i,r=i+1;
            while(l>=0 && r<S.size() && S[l]==S[r])
            {
                if((r-l+1)>len)
                {
                    len=r-l+1;
                    ans=S.substr(l,r-l+1);
                }
                l--;
                r++;
            }
        }
        return ans;
    }

};
