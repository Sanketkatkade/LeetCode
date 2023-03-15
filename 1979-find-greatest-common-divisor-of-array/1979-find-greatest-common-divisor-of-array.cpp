class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> v1;
        for (int i = 1; i <= nums[0]; i++) {
            if (nums[0] % i == 0 && nums[nums.size()-1] % i == 0) {
             v1.push_back(i);
          }
        }
        return v1[v1.size()-1];
    }
};
