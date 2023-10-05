class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        
        vector<int>v;
        for(auto& res : mp){
            if(res.second > nums.size()/3){
                v.push_back(res.first);
            }
        }
        return v;
    }
};