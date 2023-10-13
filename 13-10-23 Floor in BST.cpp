class Solution{
public:
    void solve(Node *root,int x,int &ans){
        if(root==NULL){
            return ;
        }
        
        if(root->data==x){
            ans=x;
            return;
        }
        
        if(root->data>x){
            solve(root->left,x,ans);
        }
        
        if(root->data<x){
            ans=max(root->data,ans);
            solve(root->right,x,ans);
        }
    }
    int floor(Node* root, int x) {
        int ans=-1;
        solve(root,x,ans);
        return ans;
    }
};
