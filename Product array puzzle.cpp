class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        long long prod=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                prod*=nums[i];
            }
            else count++;
        }
        vector<long long int> ans;
        for(int i=0;i<nums.size();i++){
            if(count==1){
                if(nums[i]==0){
                ans.push_back(prod);
                }
                else{
                    ans.push_back(0);
                }
            }
            else if(count>=2) ans.push_back(0);
            else ans.push_back(prod/nums[i]);
        }
        return ans;
    }
};
