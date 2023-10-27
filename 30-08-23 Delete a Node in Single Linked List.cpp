

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    Node* temp=head;
    if(x==1) return head->next;
    int i=1;
    while(i<x-1){
        temp=temp->next,i++;
    }
    if(temp->next->next==NULL) temp->next=NULL;
    else temp->next=temp->next->next;
    return head;
}
