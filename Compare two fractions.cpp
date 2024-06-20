class Solution {
  public:
    string compareFrac(string s) {
        int comma = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ',') {
                comma = i;
                break;
            }
        }
        pair<int, int> a = calc(s.substr(0, comma));
        pair<int, int> b = calc(s.substr(comma + 2));
    
        if (a.first * b.second > b.first * a.second) {
            return s.substr(0, comma);
        } else if (a.first * b.second == b.first * a.second) {
            return "equal";
        } else {
            return s.substr(comma + 2);
        }
    }

    pair<int, int> calc(string s) {
        int k = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '/') {
                k = i;
                break;
            }
        }
        int n1 = stoi(s.substr(0, k));
        int n2 = stoi(s.substr(k + 1));
        return {n1, n2};
    }
};
