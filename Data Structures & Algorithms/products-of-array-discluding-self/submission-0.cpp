class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int prodzero=1;
        int countzero=0;

        int n=nums.size();

        vector<int>ans(n,1);

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                countzero++;
            }
            product*=nums[i];
        }

        if(countzero>1){
            return vector<int>(n,0);
        }

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                continue;
            }
            prodzero*=nums[i];
        }


        for(int i=0;i<n;i++){
            if(countzero==0){
                ans[i]=product/nums[i];
            }
            else{
                if(nums[i] == 0){
                    ans[i] = prodzero;
                }
                else{
                    ans[i] = 0;
                }
            }
        }
        return ans;
    }
};
