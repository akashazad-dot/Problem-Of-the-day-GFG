// Function to insert a node in a BST.

/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
    public:
        Node* insert(Node* root, int key) {
        
        if(root->data<key){
            if(root->right){
                return insert(root->right,key);
            }
            else{
                return root->right=new Node(key);
            }
        }
        else if(root->data>key){
            if(root->left){
                return insert(root->left,key);
            }
            else{
                return root->left=new Node(key);
            }
        }
        return root;
    }

};
