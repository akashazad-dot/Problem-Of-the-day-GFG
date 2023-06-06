class Solution
{
    public:
        void inorder(Node* root,vector<Node*> &vect)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,vect);
        vect.push_back(root);
        inorder(root->right,vect);
    }
    
    int greater(vector<Node*> vect,int key)
    {
        int n = vect.size();
        for(int i=0;i<n;i++)
        {
            if(vect[i]->key>key)
            {
                return i;
            }
        }
        return -1;
    }
    
    int lesser(vector<Node*> vect,int key)
    {
        int n = vect.size();
        for(int i=n-1;i>=0;i--)
        {
            if(vect[i]->key<key)
            {
                return i;
            }
        }
        return -1;
    }
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        vector<Node*> vect;
        inorder(root,vect);
        int idx1,idx2 ;
        idx1 = lesser(vect,key);
        idx2 = greater(vect,key);
        //cout << idx1 <<" "<<idx2<<endl;
        if(idx1>=0 && idx1<vect.size())
        {
            pre = vect[idx1];
        }
        if(idx2>=0 && idx2<vect.size())
        {
            suc = vect[idx2];
        }
    }
};
