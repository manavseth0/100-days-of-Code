
class Solution
{
public:
    void solve(int ind, vector<int> &arr, int n, int k, vector<vector<int>> &res, vector<int> ds)
    {
        if(k == 0) 
        {
            res.push_back(ds);
            return;
        }
        
        if(ind < n and arr[ind] <= k) 
        {
            for(int i = ind; i < n; i++) 
            {
                if(i > ind and arr[i] == arr[i - 1])
                    continue;
                    
                ds.push_back(arr[i]);
                solve(i + 1, arr, n, k - arr[i], res, ds);
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> CombinationSum2(vector<int> &arr, int n, int k)
    {
        vector<vector<int>> res;
        vector<int> ds;
        
        sort(arr.begin(), arr.end());
        solve(0, arr, n, k, res, ds);
        
        return res;
    }
};
