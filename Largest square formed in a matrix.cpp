class Solution {
  public:
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        // code here
        int ans = 0;
        for(int i=0;i<n;i++) ans = max(ans, mat[i][0]);
        for(int j=0;j<m;j++) ans = max(ans, mat[0][j]);
        
        for(int i=1;i<n;i++) {
            for(int j=1;j<m;j++) {
                if(mat[i][j] == 0) continue;
                
                int num = min({mat[i-1][j], mat[i][j-1], mat[i-1][j-1]});
                mat[i][j] = num + 1;
                
                ans = max(ans, mat[i][j]);
            }
        }
        
        return ans;
    }
};
