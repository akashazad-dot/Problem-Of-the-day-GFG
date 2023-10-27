/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node * temp=head;
        
        
        while(temp->next){
            if(temp->data<temp->next->data){
                temp->data=temp->next->data;
                temp->next=temp->next->next;
                temp=head;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
    
};
 
   
