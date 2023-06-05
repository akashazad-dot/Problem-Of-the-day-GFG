class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	
	int min_diff=INT_MAX;
	
	void solve(Node* root,int k){
	    if(root==NULL){
	        return;
	    }
	    if(k==root->data){
	        min_diff=0;
	        return;
	    }
	    
	    if(k>root->data){
	        min_diff=min(min_diff,abs(k-root->data));
	        solve(root->right,k);
	    }
	    else{
	        min_diff=min(min_diff,abs(k-root->data));
	        solve(root->left,k);
	    }
	}
    int minDiff(Node *root, int K)
    {
        solve(root,K);
        return min_diff;
    }
};
