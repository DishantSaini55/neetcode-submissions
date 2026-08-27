class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>st;
   
      
        

        for(auto it:nums){
            st.insert(it);
        }
        int ans=0;
        for(auto it:st){

            if(st.find(it-1)==st.end()){
                int len=1;

                while(st.find(it+1)!=st.end()){
                    len++;
                    it++;
                }
                ans=max(ans,len);
            }
        }

        return ans;
    }
};
