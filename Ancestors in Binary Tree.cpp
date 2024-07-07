class Solution {
  public:
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        queue<Node*> q1;
        queue<vector<int>> q2;
        q1.push(root);
        q2.push({});
        while(!q1.empty())
        {
            Node* curr_node = q1.front();
            vector<int> parents = q2.front();
            q1.pop();
            q2.pop();
            if (curr_node->data == target) 
            {
                reverse(parents.begin(), parents.end());
                return parents;
            }
            parents.push_back(curr_node->data);
            if(curr_node->left)
            {
                q1.push(curr_node->left);
                q2.push(parents);
            }
            if(curr_node->right)
            {
                q1.push(curr_node->right);
                q2.push(parents);
            }
        }
        return {};
        
    }
};

