class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>,greater<int>> minHeap; // min-heap
        for(int it : nums){
            minHeap.push(it);

            if(minHeap.size() > k) {
                minHeap.pop(); // remove smallest
            }
        }
        
        return minHeap.top(); // kth largest
    }
};
