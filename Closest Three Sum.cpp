class Solution {
  public:
    int threeSumClosest(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int ans = INT_MIN, n = arr.size(), diff = INT_MAX, i = 0;
        
        while (i < n - 2) {
            int st = i + 1, end = n - 1;
            while (st < end) {
                int sum = arr[i] + arr[st] + arr[end];
                int current_diff = abs(sum - target);
                if (current_diff < diff || (current_diff == diff && sum > ans)) {
                    diff = current_diff;
                    ans = sum;
                }
                if (sum < target) st++;
                else if (sum > target) end--;
                else return target;
            }
            i++;
        }
        return ans;
    }
};
