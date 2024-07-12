class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
         if(!root) return 0;
        if(root->left==NULL && root->right==NULL){
            if(root->data==target) return 1;
            else return 0;
        }
        return (hasPathSum(root->left, target-root->data) ||
                hasPathSum(root->right, target-root->data));
    
    }
};
