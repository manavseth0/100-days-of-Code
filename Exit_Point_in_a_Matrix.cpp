
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
         int i=0;
         int j=0;
         int drct = 0;
         
         while(i < n && j < m && i >= 0 && j >= 0){
            if(matrix[i][j] == 1){
                matrix[i][j] = 0;
                drct++;
            }
            
            drct %= 4; 
            
            if(drct == 0) j++;
            else if(drct == 1) i++;
            else if(drct == 2) j--;
            else if(drct == 3) i--;
         }
         
         if(drct == 0) return {i,j-1};
         else if(drct == 1) return {i-1,j};
         else if(drct == 2) return {i,j+1};
         
         return {i + 1, j}; 
    }
};
