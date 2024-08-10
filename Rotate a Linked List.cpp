class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Your code here
        if(head->next == NULL)
            return head;
        Node* temp = head->next;
        Node* prev = head;
        if(temp->next == NULL){
            if(k==2){
                return head;
            }
            temp->next = prev;
            prev->next = NULL;
            return temp;
        }
        int s = k-1;
        Node* next = temp->next;
        while(k--){
            prev = prev->next;
        }
        if(prev==NULL){
            return head;
        }
        temp = prev;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = head;
        while(s--){
            head = head->next;
        }
        head->next = NULL;
        return prev;
    }
};
