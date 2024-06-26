class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
         int n = matrix.size(), m = matrix[0].size(), ans = 0;
        
        int dr[4] = {1, -1, 0, 0};
        int dc[4] = {0, 0, 1, -1};
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j]) continue;
                
                for (int k = 0; k < 4; ++k) {
                    int nr = i  +dr[k];
                    int nc = j + dc[k];
                    
                    if (nr >= 0 and nr < n and nc >= 0 and nc < m)
                        ans += matrix[nr][nc];
                }
            }
        }
        
        return ans;
    }
};
