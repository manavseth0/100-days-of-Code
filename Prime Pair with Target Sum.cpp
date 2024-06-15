class Solution {
public:
    vector<bool> isprime(int n) {
        vector<bool> x(n + 1, true);
        x[0] = 0;
        x[1] = 0;
        for (int i = 2; i * i <= n; i++) {
            if (x[i]) {
                for (int j = i * i; j <= n; j += i) {
                    x[j] = 0;
                }
            }
        }
        return x;
    }

    vector<int> getPrimes(int n) {
        vector<int> v(2, -1);
        vector<pair<int, int>> temp;
        //unordered_map<int, int> mp;

        vector<bool> x = isprime(n);

        for (int i = 2; i <=n/2; i++) {
            if (x[i] && x[n - i]) {
                temp.push_back({i, n - i});
            }
        }
        
        if (temp.empty()) return v;
        
        sort(temp.begin(), temp.end());
        v[0] = temp[0].first;
        v[1] = temp[0].second;
        return v;
    }
};
