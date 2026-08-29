class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=ans){
                return ans;
            }
            ans++;
        }
        return ans;
    }
};
