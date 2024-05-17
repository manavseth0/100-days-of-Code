class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        int i = 0, j = 1;
        
        while(i<n && j<n){
            if(i!=j && abs(arr[j]-arr[i]) == x)
                return 1;
            else if(abs(arr[j]-arr[i]) > x)
                i++;
            else
                j++;
        }
        return -1;
    }
};
