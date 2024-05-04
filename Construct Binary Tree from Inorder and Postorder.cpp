class Solution
{
    public:

    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
         if(n==0){
            return NULL;
        }
        Node*root=new Node(post[n-1]);
        int rootindex=0;
        for(int i=0;i<n;i++){
            if(in[i]==post[n-1]){
                rootindex=i;
                break;
            }
        }
        root->left=buildTree(in,post,rootindex);
        root->right=buildTree(in+rootindex+1,post+rootindex,n-rootindex-1);
        return root;
    }
};
