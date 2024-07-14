class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
          int cone=0,czero=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                czero++;
            }else{
                cone++;
            }
        }
        arr.clear();
        while(czero--){
            arr.push_back(0);
        }
        while(cone--){
            arr.push_back(1);
        }
    }
};
