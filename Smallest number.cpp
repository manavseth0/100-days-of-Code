class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        if(s > 9*d) {
            return "-1";
        } 
        string res = "1" + string(d-1, '0');
        s--;
        if(s == 0) {
            return res;
        }
        for(int i = d-1; s > 0; --i) {
            if(s > 9) {
                res[i] += 9;
                s -= 9;
            }
            else {
                res[i] += s;
                s = 0;
            }
        }
        return res;
    }
};
