

/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
void inorder(Node *root, vector<int> &res){
    if(root==NULL) return;
    inorder(root->left, res);
    res.push_back(root->data);
    inorder(root->right, res);
}
float findMedian(struct Node *root)
{
      //Code here
      vector<int>res;
      inorder(root,res);
      int n=res.size();
      float sum=0;
      if(n%2==0){
        return (res[n/2-1]+ res[(n/2)])/2.0;
      }
      return res[n/2];
}
