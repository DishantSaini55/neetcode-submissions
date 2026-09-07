class Solution {
public:
    int f(int i,vector<int>& nums,vector<int>&dp){
        if(i<0){
            return 0;
        }
        if(i==0){
            return nums[0];
        }

        if(dp[i]!=-1){
            return dp[i];
        }

        return dp[i]= max(nums[i]+f(i-2,nums,dp),f(i-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) {
            return nums[0];
        }
        vector<int>nums1;
        vector<int>nums2;

        for(int i=1;i<nums.size();i++){
            nums1.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()-1;i++){
            nums2.push_back(nums[i]);
        }
        vector<int>dp(nums1.size()+1,-1);
        vector<int>dp1(nums2.size()+1,-1);

        return max(f(nums1.size()-1,nums1,dp),f(nums2.size()-1,nums2,dp1));
    }
};
