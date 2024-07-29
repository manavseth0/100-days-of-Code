class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int ans = -1;
        int count = 0;
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            int index = lower_bound(arr[i].begin(), arr[i].end(), 1) - arr[i].begin();
            int total = arr[0].size() - index;
            
            if(total > count) {
                ans = i;
                count = total;
            }
        }
        return ans;
    }
};
