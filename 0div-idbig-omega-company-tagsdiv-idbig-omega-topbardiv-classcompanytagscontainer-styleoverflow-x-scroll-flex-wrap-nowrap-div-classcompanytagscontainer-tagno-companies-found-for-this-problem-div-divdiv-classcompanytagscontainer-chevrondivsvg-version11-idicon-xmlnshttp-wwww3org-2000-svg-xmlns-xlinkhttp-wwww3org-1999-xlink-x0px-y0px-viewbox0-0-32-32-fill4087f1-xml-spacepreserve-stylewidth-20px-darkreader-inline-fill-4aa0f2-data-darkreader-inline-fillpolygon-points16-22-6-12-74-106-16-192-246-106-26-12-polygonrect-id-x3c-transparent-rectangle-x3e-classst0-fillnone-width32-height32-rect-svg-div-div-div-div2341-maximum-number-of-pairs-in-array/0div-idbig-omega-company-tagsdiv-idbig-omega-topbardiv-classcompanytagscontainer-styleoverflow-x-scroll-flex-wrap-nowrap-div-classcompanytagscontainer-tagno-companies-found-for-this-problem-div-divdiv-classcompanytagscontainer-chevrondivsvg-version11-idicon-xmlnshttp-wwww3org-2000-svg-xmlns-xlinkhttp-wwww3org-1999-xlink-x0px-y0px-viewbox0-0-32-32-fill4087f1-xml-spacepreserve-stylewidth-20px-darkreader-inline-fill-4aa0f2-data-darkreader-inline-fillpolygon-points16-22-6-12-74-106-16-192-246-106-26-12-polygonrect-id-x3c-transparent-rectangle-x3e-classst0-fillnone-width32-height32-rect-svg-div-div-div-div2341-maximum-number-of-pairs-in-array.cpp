class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        int pair = 0;
        int num = 0;
        for(auto & res : mp){
            pair += res.second / 2;
            num += res.second % 2;
        }
        return {pair,num};
    }
};