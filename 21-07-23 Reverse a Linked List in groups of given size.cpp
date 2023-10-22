/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node* prev=NULL;
        node* mainhead=NULL;
        node* curr=head;
        int flag=0;
        while(head!=NULL){
            int cnt=0;
            node* start=head;
            while(cnt<k && head!=NULL){
                node* forward=head->next;
                head->next=prev;
                prev=head;
                head=forward;
                cnt++;
            }
            if(flag==0){
                mainhead=prev;
                flag=1;
            }
            else{
                curr->next=prev;
                curr=start;
            }
        }
        curr->next=NULL;
        return mainhead;
    }
};
