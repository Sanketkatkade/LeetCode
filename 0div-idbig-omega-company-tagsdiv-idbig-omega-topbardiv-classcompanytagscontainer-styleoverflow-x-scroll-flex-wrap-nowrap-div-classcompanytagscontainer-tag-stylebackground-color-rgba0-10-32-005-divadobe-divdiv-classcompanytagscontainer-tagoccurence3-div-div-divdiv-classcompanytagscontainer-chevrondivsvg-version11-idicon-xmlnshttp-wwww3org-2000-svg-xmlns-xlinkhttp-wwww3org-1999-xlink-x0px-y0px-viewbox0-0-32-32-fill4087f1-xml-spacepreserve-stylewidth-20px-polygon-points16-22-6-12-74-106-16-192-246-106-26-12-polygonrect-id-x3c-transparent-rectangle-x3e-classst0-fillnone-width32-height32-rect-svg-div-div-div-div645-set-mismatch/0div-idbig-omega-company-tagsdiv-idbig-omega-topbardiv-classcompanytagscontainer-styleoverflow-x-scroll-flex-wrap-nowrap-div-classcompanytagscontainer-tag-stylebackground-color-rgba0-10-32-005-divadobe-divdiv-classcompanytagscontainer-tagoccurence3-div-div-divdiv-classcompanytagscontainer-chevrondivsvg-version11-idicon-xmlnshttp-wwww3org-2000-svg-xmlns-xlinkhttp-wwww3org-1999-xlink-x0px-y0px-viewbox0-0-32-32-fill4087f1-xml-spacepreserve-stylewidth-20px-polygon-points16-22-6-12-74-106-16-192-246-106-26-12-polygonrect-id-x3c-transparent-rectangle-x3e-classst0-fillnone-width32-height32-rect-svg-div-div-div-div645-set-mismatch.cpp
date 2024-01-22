class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        vector<int>res;
        for(const auto& it : mp){
            if(it.second == 2){
                res.push_back(it.first);
            }
        }
        for(int i = 1; i <= nums.size(); i++){
            if(mp.find(i) == mp.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};