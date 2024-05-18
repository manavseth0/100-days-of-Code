class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int n = a.size();
        if(a[n-1] > a[n-2]){
            return a[n-1];
        }
        
        int i = 0, j = n-1;
        int mid = 0;
        while(i <= j){
            mid = (i+j)/2;
            if(mid<(n-1) && a[mid] > a[mid+1]){
                if(mid>0 && a[mid] > a[mid-1]){
                    return a[mid];
                }
                else{
                    j = mid-1;
                }
            }
            else
                i = mid+1;
        }
        return mid;
    }
};
