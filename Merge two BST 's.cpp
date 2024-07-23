class Solution {
  public:
    Node* insert(Node* root, int value) {
        if (!root) {
            return new Node(value);
        }
        if (value >= root->data) {
            root->right = insert(root->right, value);
        } else if (value < root->data) {
            root->left = insert(root->left, value);
        }
        return root;
    }
    void inorder1(Node *root1, Node*root2) {
        if (!root1)
            return;
        inorder1(root1->left, root2);
        insert(root2,root1->data);
        inorder1(root1->right, root2);
    }
    void inorder2(Node *root, vector<int>& arr) {
        if (!root)
            return;
        inorder2(root->left, arr);
        arr.push_back(root->data);
        inorder2(root->right, arr);
    }
    vector<int> merge(Node *root1, Node *root2) {
        vector<int> arr;
        inorder1(root1, root2);
        inorder2(root2, arr);
        return arr;
    }
};
