//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{   int n=S.size();
        int s=0;
        int e=n-1;
        
        while(s<e){
            if(S[s]!=S[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
	}

};
