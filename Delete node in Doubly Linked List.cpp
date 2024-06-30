class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        
        if(x==1) return head->next;
       

        Node* temp1 = head;
        Node* temp2 = head;
        int cnt = 1;
        while(cnt!=x){
            temp1 = temp1->next;
            cnt++;
        }
       if(temp1->next!=NULL){
               temp1->next->prev = temp1->prev;
            }
           temp1->prev->next = temp1->next;
           temp1->prev = NULL;
         

       return head;
            }
};
