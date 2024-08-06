class Solution {
  public:
    int isValid(string str) {
        // code here
        vector<string>v;
        stringstream ss(str);
        string word;
        while(getline(ss,word,'.')){
            v.push_back(word);
        }
        int c=0;
        for(string i:v){
            if(i=="" || (i[0]=='0' && i.size()>1)){
                return 0;
            }
            int k=stoi(i);
            if(k>=0 && k<=255){
                c++;
            }
        }
        if(c==4){
            return 1;
        }
        return 0;
    }
};
