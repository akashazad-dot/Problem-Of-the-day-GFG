
class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {

       //Your code here
       if(R==0){
           return 1;
       }
       long long ans=power(N,R/2);
       
    //   even
    if(R%2==0){
        return (ans*ans)%1000000007;
    }
    
    else{
        return (N*((ans*ans)%1000000007))%1000000007;
    }
    
    
    }

};
