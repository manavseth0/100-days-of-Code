class Solution {
  public:
    int countNumberswith4(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            string s=to_string(i);
            for(int j=0;j<s.size();j++){
                if((s[j]-'0')==4){
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};
