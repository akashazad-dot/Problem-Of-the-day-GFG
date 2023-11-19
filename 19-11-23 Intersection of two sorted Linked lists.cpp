

/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    Node* temp1=head1;
    Node* temp2=head2;
    Node* curr=NULL;
    Node* head=NULL;
    
    while(temp1 and temp2){
        if(temp1->data==temp2->data){
            if(head==NULL){
                Node* t=new Node(temp1->data);
                head=t;
                curr=t;
            }
            else{
                Node* t=new Node(temp1->data);
                curr->next=t;
                curr=curr->next;
            }    
            
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else{
            if(temp1->data < temp2->data){
                temp1=temp1->next;
            }
            else{
                temp2=temp2->next;
            }
        }
    }
            return head;

}
