class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count = 0;
        unordered_map<int,int>mp;
        for(auto x : nums1){
            for(auto y : nums2){
                mp[x + y]++;
            }
        }
        for(auto x : nums3){
            for(auto y : nums4){
                auto it = mp.find(0-x-y);
                if(it != mp.end()){
                    count += it->second;
                }
            }
        }
        return count;
    }
};