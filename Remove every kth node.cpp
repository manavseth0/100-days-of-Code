class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
       if(head->next == NULL || head == NULL) return head;
      if(K == 1) return NULL;
      
      Node *temp = head;
      int ind = 1;
      
      while(temp != NULL){
           ind++;
                if(ind == K) {
                          ind = 1;
                          if(temp->next)
                              temp->next = temp->next->next;
                                }
                temp = temp->next;
          }
      return head;
    
    }
};
