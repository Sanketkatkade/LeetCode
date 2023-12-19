class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &x : nums){
            mp[x]++;
        }
        int x = 0;
        int y = 0;
        for(auto &i : mp){
            if(i.second > y){
                y = i.second;
                x = i.first;
            }
        }
        unordered_map<int,int>mp2;
        for(int i = 0; i < nums.size(); i++){
            mp2[nums[i]]++;
            mp[nums[i]]--;
            if(mp2[x]*2 > i+1 && mp[x]*2 > nums.size()-1-i){
                return i;
            }
        }
        return -1;
    }
};