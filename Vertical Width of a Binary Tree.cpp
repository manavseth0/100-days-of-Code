class Solution {
  public:
   
    int verticalWidth(Node* root) {
        if(!root) return 0;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        int mini = 0;
        int maxi = 0;
        
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            Node* temp = front.first;
            int lvl = front.second;
            if(temp->left){
                q.push({temp->left,lvl-1});
                mini = min(mini,lvl-1);
            }
            if(temp->right){
                q.push({temp->right,lvl+1});
                maxi = max(maxi,lvl+1);
            }
        }
        return maxi - mini + 1 ;
    }
};
