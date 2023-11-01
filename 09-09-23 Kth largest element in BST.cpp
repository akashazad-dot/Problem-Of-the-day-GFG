/*The Node structure is defined as
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

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{   private:
    void solve(Node *root,vector<int>&v){
        if(root==NULL){
            return;
        }
        solve(root->left,v);
        v.push_back(root->data);
        solve(root->right,v);
    }
    public:
    int kthLargest(Node *root, int K)
    {
        vector<int> v;
        solve(root,v);
        int n=v.size()-1;
        return v[n-K+1];
    }
};
