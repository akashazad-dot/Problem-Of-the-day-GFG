/*The structure of Node

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
    // returns the inorder successor of the Node x in BST (rooted at 'root')
  Node * inOrderSuccessor(Node *root, Node *x)
    {

        Node *succ=NULL; 
        
        while(root!=NULL){
            if(x->data >= root->data)root=root->right;
            else {
                succ=root;
                root=root->left;
            }
        }
        return succ;
    }
};
