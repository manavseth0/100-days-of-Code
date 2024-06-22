class Solution {
  public:
    long long ExtractNumber(string sent) {
        sent.push_back('#');
        long long ans=-1;
        long long num=0;
        bool istrue=false;
        for(int i=0;i<sent.length();i++){
        
            if(sent[i]>='0' && sent[i]<='9'){
                num=num*10+(sent[i]-'0');
                if(sent[i]=='9')
                istrue=true;
            }
            else{
                
                if(istrue==true){
                    istrue=false;
                }
                else{
                    if(num!=0)
                     ans=max(ans,num);
                }
                num=0;
            }
            
        }
        return ans;
    }
};
