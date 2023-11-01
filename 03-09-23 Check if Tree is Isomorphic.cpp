/*Complete the function below
Node is as follows:
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

class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1,Node *root2)
    {
      if(!root1 && !root2){
          return 1;
      }
      if(!root1 || !root2){
          return 0;
      }
      
      if(root1->data != root2->data){
          return 0;
      }
      
      bool a= isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right);
      bool b=isIsomorphic(root1->left,root2->right) && isIsomorphic(root1->right,root2->left);
      
      return a|| b;
    }
};
