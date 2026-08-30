class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        priority_queue<int>pq;

        vector<int>freq(26,0);

        for(auto it:tasks){
            freq[it-'A']++;
        }

        for(int i=0;i<26;i++){
            if(freq[i]>0){
                pq.push(freq[i]);
            }
        }


        int ans=0;

        while(!pq.empty()){
            vector<int>temp;
            int cycle=n+1;

            while(cycle>0 && !pq.empty()){

                int freq=pq.top();
                pq.pop();

                freq--;

                if(freq>0){
                    temp.push_back(freq);
                }

                ans++;
                cycle--;
            }

            for(auto it:temp){
                pq.push(it);
            }

            if(!pq.empty()){
                ans+=cycle;
            }
        }

        return ans;
    }
};
