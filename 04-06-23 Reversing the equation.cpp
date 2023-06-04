class Solution
{
  public:
    string reverseEqn (string s)
        {
            string temp="",ans="";
            int n=s.length();
            
            for(int i=n-1;i>=0;i--){
                if(s[i]-'0'>=0 && s[i]-'0'<=9){
                    temp=temp+s[i];
                }
                else{
                    reverse(temp.begin(),temp.end());
                    ans=ans+temp;
                    ans=ans+s[i];
                    temp="";
                }
            }
            reverse(temp.begin(),temp.end());
            ans=ans+temp;
            
            return ans;
        }
};
