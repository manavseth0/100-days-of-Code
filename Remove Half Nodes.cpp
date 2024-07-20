class Solution {
  public:
    Node *RemoveHalfNodes(Node *root) {
        // code here
        if(!root){
            return nullptr;
        }
        if(!root->left && !root->right){
            return root;
        }
        if(!root->left && root->right){
            return RemoveHalfNodes(root->right);
        }
        if(!root->right && root->left){
            return RemoveHalfNodes(root->left);
        }
        root->left=RemoveHalfNodes(root->left);
        root->right=RemoveHalfNodes(root->right);
        return root;
    }
};
