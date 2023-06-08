class Solution
{
public:
   string kthPermutation(int n, int k){
    string s;
    int i=1;
    while(i<=n){
        s.append(to_string(i));
        i++;
    }
    for(int i=1; i<k; i++)
        next_permutation(s.begin(), s.end());
    return s;
}

};
