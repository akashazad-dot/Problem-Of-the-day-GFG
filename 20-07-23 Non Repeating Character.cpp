
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {  
        unordered_map<char,int>mp;
        for(int i=0;i<S.size();i++){
            mp[S[i]]++;
        }
        
        for(int i=0;i<S.size();i++){
            if(mp[S[i]]==1){
                return S[i];
            }
        }
        
        return '$';
    }

};
