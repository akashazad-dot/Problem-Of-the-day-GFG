//User function Template for C++

class Solution{
public:
    queue<int>ans;
    void Reverse(stack<int> &St){
        
        if (!St.empty()){
            ans.push(St.top());
            St.pop();
        }
        else{
            return;
        }
        
        Reverse(St);
        
        while (!ans.empty()){
            St.push(ans.front());
            ans.pop();
        }
        
        
    }
};
