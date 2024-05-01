class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        // Code here
         vector<char>vov;
        vector<char>cons;
        Node* t=head;
        while(t)
        {
            switch(t->data)
            {
                case 'a':vov.push_back('a');
                break;
                case 'e':vov.push_back('e');
                break;
                case 'i':vov.push_back('i');
                break;
                case 'o':vov.push_back('o');
                break;
                case 'u':vov.push_back('u');
                break;
                default:cons.push_back(t->data);
            }
            t=t->next;
        }
        t=head;
        for(int i=0;i<vov.size();i++)
        {
            t->data = vov[i];
            t=t->next;
        }
        for(int i=0;i<cons.size();i++)
        {
            t->data = cons[i];
            t=t->next;
        }
        return head;
    
    }
};
