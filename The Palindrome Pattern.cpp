class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        int n =arr.size();
        for(int i =0;i< n;i++){
            bool ok = true;
            for(int j =0;j< n/2;j++){
                if(arr[i][j] != arr[i][n -j -1]){
                    ok =false;
                }
            }
            if(ok){
                return to_string(i) + " R";
            }
        }
        for(int i =0;i< n;i++){
            bool ok =true;
            for(int j =0;j< n/2;j++){
                if(arr[j][i] != arr[n -j -1][i]){
                    ok =false;
                }
            }
            if(ok){
                return to_string(i) + " C";
            }
        }
        return "-1";
    }
};
