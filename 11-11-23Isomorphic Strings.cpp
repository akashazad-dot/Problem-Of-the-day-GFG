class Solution
{
    public:
    //Function to check if two strings are isomorphic.
 bool areIsomorphic(string str1, string str2)
    {
        if(str1.length() != str2.length())
        {
            return false;
        }
        else if(str1.length() == 1)
        {
            return true;
        }
        else
        {
            //Maps char of str1 with char of str2 in case of a and vice-versa in case of b
            unordered_map<char,char> a;
            unordered_map<char,char> b;

            for(int i = 0; i < str1.length(); i++)
            {
                if(a.find(str1[i]) != a.end())
                {
                    if(a[str1[i]] != str2[i])
                        return false;
                }
                else if(b.find(str2[i]) != b.end())
                {
                    if(b[str2[i]] != str1[i])
                        return false;
                }
                a[str1[i]] = str2[i];
                b[str2[i]] = str1[i];
            }
        }
        return true;
    }
};
