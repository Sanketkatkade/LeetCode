class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 1; i < nums.size(); i++){
            int sum = nums[i] + nums[i - 1];
            mp[sum]++;
            if(mp[sum] > 1){
                return true;
            }
        }
        return false;
    }
};

// class Solution {
// public:
//     bool findSubarrays(vector<int>& nums) {
//         int count = 0; 
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i+1; j < nums.size(); j++){
//                 if(nums[j] + nums[j+1] == nums[i] + nums[i+1]){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };