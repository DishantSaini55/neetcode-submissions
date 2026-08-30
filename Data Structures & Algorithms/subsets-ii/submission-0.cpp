class Solution {
public:
    vector<vector<int>>ans;

    void solve(vector<int>& nums,int i,vector<int>& temp){
        if(i==nums.size()){
            ans.push_back(temp);
            return ;
        }

        // take

        temp.push_back(nums[i]);
        solve(nums,i+1,temp);

        //nottake

        temp.pop_back();
        // Duplicate skip
        while(i + 1 < nums.size() && nums[i] == nums[i + 1])
            i++;

        solve(nums,i+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        solve(nums,0,temp);
        return ans;
    }
};
