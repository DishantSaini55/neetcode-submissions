class Solution {
public:
    int hammingWeight(uint32_t n) {
        string s = bitset<32>(n).to_string();

        int count = 0;

        for(char ch : s) {
            if(ch == '1') {
                count++;
            }
        }

        return count;
    }
};
