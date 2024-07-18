class Solution {
  public:
    int find_length(vector<int>& arr,int n,int prev,int want_big)
    {   
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(!want_big and arr[i]<prev){
                prev = arr[i];
                cnt++;
                want_big = 1-want_big;
            }
            else if(want_big and arr[i]>prev){
                prev= arr[i];
                cnt++;
                want_big = 1-want_big;
            }
            else{
                prev= arr[i];
            }
        }  
        return cnt;
    }
    
    int alternatingMaxLength(vector<int>& arr) {
        int n = arr.size();
        
        return max( find_length(arr,n,1e6,0), find_length(arr,n,-1e6,1) );
    }
};
