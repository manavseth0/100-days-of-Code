class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int s = 1;
        int n = arr1.size(), m = arr2.size();
        int i = 0, j = 0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                if(s==k)
                    return arr1[i];
                i++;
            }
            else{
                if(s==k)
                    return arr2[j];
                j++;
            }
            s++;
        }
        while(i<n){
            if(s==k)
                return arr1[i];
            i++;
            s++;
        }
        while(j<m){
            if(s==k)
                return arr2[j];
            j++;
            s++;
        }
        return -1;
    }
};
