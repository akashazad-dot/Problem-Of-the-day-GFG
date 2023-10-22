/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void rightViewHelp(Node* root,vector<int>&ans,int level){
        if(root==NULL){
            return ;
        }
        
        if(ans.size()==level){
            ans.push_back(root->data);
        }
        
        rightViewHelp(root->right,ans,level+1);
        rightViewHelp(root->left,ans,level+1);
    }
    vector<int> rightView(Node *root)
    {
        
        vector<int>ans;
        rightViewHelp(root,ans,0);
        return ans;
    }
};
