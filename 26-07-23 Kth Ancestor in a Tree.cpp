

//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
void solve(Node* root,int &node,bool &found,vector<int>&values){
    if(root==NULL) return;
    
    if(root->data==node){
        found=1;
        return;
    }
    solve(root->left,node,found,values);
    
    if(found){
        values.push_back(root->data);
        return;
    }
   
    solve(root->right,node,found,values);
    
    if(found){
        values.push_back(root->data);
    }

}

int kthAncestor(Node *root, int k, int node)
{
    bool found=0;
    vector<int>values;
    solve(root,node,found,values);
    
    return values.size()<k?-1:values[k-1];
}
