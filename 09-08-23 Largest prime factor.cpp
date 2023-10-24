
class Solution{
public: 
   bool isprime(int n){
        int cnt=0;
        for(int i=1; i*i<=n; i++){
            if (n%i==0) {
                cnt++;
                int j=n/i;
                if (j!=i){
                    if (j%n==0) cnt++;
                }
            }
        }
        if (cnt==2) return true;
        return false;
    } 
    long long int largestPrimeFactor(int n){
        if (isprime(n)) return n;
        long long int pr=1;
        long long int ans=1;
        for(long long int i=2; i<=sqrt(n)+1; i++){
            if (n%i==0){
                if (__gcd(pr, i)==1){
                    ans = max(ans, i);
                    pr=i*pr;
                }
            }
        }
        for(int i=2; i<=sqrt(n)+1; i++){
            long long int j=n/i;
            if (n%j==0){
                if (__gcd(pr, j)==1){
                    ans = max(ans, j);
                    pr=j*pr;
                }
            }
        }
        return ans;
    }
};
