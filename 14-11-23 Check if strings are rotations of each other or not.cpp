class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
 bool areRotations(string s1,string s2) {
    string s3 = s1 + s1;
    int n1 = s3.length(), n2 = s2.length();
        
    for(int i = 0; i <= n1-n2; i++) {
        string s = s3.substr(i, n2);
        if(s == s2) {
            return true;
        }
    }
    return false;
}
};
