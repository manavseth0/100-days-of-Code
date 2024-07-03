class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        Node* left = head;
        Node* right = head;
        int i = 0, j = 0;
        
        Node* temp = new Node(-1);
        Node* result = temp;
        
        while(right != NULL) {
            while(right != NULL && right->data == left->data) {
                right = right->next;
                j++;
            }
            if(j - i == 1) {
                temp->next = left;
                temp = temp->next;
            }
            left = right;
            i = j;
        }
        
        temp->next = NULL;
        return result->next;
    }
};
