class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        int res = 0;
        int maxFreq = INT_MIN;
        for(const auto& it : mp){
            if(it.second > maxFreq){
                maxFreq = it.second;
            }
        }

        for(const auto& it : mp){
            if(it.second == maxFreq){
                res += it.second;
            }
        }
        return res;
    }
};