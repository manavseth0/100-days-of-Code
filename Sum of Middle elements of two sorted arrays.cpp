class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size();
        int m = arr2.size();
        vector<int> ans(n+m);
        
        for(int i=0; i<n; i++) {
            ans[i] = arr1[i];
        }
        
        for(int i=0; i<m; i++) {
            ans[n+i] = arr2[i];
        }
        
        sort(ans.begin(), ans.end());
        
        int rans = ans[(n+m)/2 - 1] + ans[(n+m)/2];
        
        return rans;
    }
};
