class Solution {
public:
    vector<vector<int>>ans; 
    void solve(vector<int>& candidates,int i, int target,vector<int>&temp){
        if(target==0){
            ans.push_back(temp);
            return ;
        }

        if(target<0 || i==candidates.size()){
            return ;
        }

        //take
        temp.push_back(candidates[i]);
        solve(candidates,i,target-candidates[i],temp);

        //nottake
        temp.pop_back();
        solve(candidates,i+1,target,temp);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        solve(candidates,0,target,temp);
        return ans;
    }
};
