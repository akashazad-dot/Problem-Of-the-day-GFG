class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        int maxi;
        if(root==NULL){
            return 0;
        }
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        maxi=max(left,right)+1;
        
        return maxi;
    }
};
