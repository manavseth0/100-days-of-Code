class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        map<int,priority_queue<int>>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(arr[i]==x) continue;
            mp[abs(x-arr[i])].push(arr[i]);
        }
        for(auto it:mp){
            if(k==0) return ans;
            
                while(!it.second.empty() and k>0){
                    ans.push_back(it.second.top());
                    it.second.pop();
                    k--;
                }
            
        }
        return ans;
    }
};
