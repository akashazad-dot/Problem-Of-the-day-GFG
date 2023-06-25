class Solution{   
public:
    
    bool check(string s,string str,int k){
        for(int i=0;i<k;i++){
            if(s[i]!=str[i]){
                return false;
            }
        }
        return true;
    }
    
    int klengthpref(string arr[], int n, int k, string str){    
        int count=0;
        for(int i=0;i<n;i++){
            if(check(arr[i],str,k)){
                count++;
            }
        }
        
        return count;
    }
};
