class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ma;
        unordered_map<char,int>mb;

        for(auto it:s){
            ma[it]++;
        }
        for(auto it:t){
            mb[it]++;
        }

        return (ma==mb);

    }
};
