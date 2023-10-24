class Solution
{
    public:
     int countFractions(int n, int numerator[], int denominator[]) {
        unordered_map<int, unordered_map<int, int>> freq;
        int res = 0;
        for(int i = 0; i < n; i++) {
            int num = numerator[i], den = denominator[i];
            int gcd = __gcd(num, den);
            num /= gcd, den /= gcd;
            
            int resNum = den - num;
            int resDen = den;
            
            res += freq[resNum][resDen];
            freq[num][den]++;
        }
        return res;
    }
};
