class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto x : nums){
            mp[x]++;
        }

        for(const auto& it : mp){
            int x = it.first;
            int y = it.second;
            if(y == 1 && mp.count(x+1) == 0 && mp.count(x-1) == 0){
                ans.push_back(x);
            }
        }
        return ans;
    }
};