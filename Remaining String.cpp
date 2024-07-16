class Solution {
  public:
    string printString(string s, char ch, int count) {
        // Your code goes here
        int cur = 0;
        string rem = "";
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] == ch)
                cur++;
            if(cur == count)
            {
                rem = s.substr(i+1, s.length());
                break;
            }
        }
        return rem;
    }
};
