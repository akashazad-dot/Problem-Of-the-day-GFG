class Solution{
public:	
		
	int isDivisible(string s){
	    int odd=0,even=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='1'){
	            if(i%2==0){
	                odd++;
	            }
	            else{
	                even++;
	            }
	        }
	    }
	    return (even-odd)%3==0;
	}

};
