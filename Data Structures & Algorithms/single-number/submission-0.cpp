class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        
        for(auto it:nums){
            mpp[it]++;
        }

        for(auto it:mpp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};
