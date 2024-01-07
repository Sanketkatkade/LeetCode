class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key && i < nums.size()-1){
                mp[nums[i+1]]++;
            }
        }
        int res;
        int count = INT_MIN;
        for(auto it : mp){
            if(it.second > count){
                count = it.second;
                res = it.first;
            }
        }
        return res;
    }
};