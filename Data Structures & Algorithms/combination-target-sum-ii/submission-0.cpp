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

        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1]){
                continue;
            }

            if(candidates[j] > target){
                break;
            }

            //take
            temp.push_back(candidates[j]);
            solve(candidates,j+1,target-candidates[j],temp);

            //nottake
            temp.pop_back();
            

        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>temp;
        solve(candidates,0,target,temp);
        return ans;
    }
};
