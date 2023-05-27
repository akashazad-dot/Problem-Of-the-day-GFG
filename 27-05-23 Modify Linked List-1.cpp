class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        long long int N = 0;
        if(head==NULL || head->next == NULL)
            return head;
            
        stack<int> st;
        struct Node *temp = head;
        
        while(temp!=NULL){
            st.push(temp->data);
            temp = temp->next;
            N++;
        }
        
        temp = head;
        N /= 2;
        
        while(N--){
            temp->data = st.top() - temp->data;
            temp = temp->next;
            st.pop();
        }
        
        while(temp!=NULL){
            temp->data = st.top();
            temp = temp->next;
            st.pop();
        }
        
        return head;
    }
};
