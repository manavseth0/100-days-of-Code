class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
        long long r=0,ts=0,maxin=0;
        int i=0;
        while(i<n){
            ts+=a[i];
            r+=(i*1ll*a[i]);
            i++;
        }
        
        int j=0;
        maxin=max(maxin,r);
        while(j<n){
            r=r-(ts-a[j])+(a[j]*1ll*(n-1));
            maxin=max(maxin,r);
            j++;
        }
        return maxin;
        
    }
};
