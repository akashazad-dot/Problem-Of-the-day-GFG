class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        vector<int>ans;
        while(head1!=NULL){
            ans.push_back(head1->data);
            head1=head1->next;
        }
        
        while(head2!=NULL){
            ans.push_back(head2->data);
            head2=head2->next;
        }
        sort(ans.begin(),ans.end());
        
        
        Node* head=new Node(ans[0]);
        Node* temp=head;
        
        int n=ans.size();
        
        for(int i=1;i<n;i++){
            if(ans[i]!=ans[i-1]){
                temp->next=new Node(ans[i]);
                temp=temp->next;
            }
        }
        return head;
    }
};
