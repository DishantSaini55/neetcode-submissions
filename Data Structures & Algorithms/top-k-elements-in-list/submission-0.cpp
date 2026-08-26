class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;


        for(auto it:nums){
            mpp[it]++;
        }

        for(auto it: mpp){
            minheap.push({it.second,it.first});


            if(minheap.size()>k){
                minheap.pop();
            }
        }

        vector<int>res;

        while(!minheap.empty()){
            res.push_back(minheap.top().second);
            minheap.pop();
        }

        sort(res.begin(),res.end());
        return res;

    }
};
