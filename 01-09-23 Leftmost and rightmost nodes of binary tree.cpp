void printCorner(Node *root)
{   queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        int s=q.size();
        for(int i=0;i<s;i++){
            if(i==0 ||i==s-1){
                cout<<q.front()->data<<" ";
            }
            if(q.front()->left!=NULL){
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL){
                q.push(q.front()->right);
            }
            q.pop();
        }
    }

 

}
