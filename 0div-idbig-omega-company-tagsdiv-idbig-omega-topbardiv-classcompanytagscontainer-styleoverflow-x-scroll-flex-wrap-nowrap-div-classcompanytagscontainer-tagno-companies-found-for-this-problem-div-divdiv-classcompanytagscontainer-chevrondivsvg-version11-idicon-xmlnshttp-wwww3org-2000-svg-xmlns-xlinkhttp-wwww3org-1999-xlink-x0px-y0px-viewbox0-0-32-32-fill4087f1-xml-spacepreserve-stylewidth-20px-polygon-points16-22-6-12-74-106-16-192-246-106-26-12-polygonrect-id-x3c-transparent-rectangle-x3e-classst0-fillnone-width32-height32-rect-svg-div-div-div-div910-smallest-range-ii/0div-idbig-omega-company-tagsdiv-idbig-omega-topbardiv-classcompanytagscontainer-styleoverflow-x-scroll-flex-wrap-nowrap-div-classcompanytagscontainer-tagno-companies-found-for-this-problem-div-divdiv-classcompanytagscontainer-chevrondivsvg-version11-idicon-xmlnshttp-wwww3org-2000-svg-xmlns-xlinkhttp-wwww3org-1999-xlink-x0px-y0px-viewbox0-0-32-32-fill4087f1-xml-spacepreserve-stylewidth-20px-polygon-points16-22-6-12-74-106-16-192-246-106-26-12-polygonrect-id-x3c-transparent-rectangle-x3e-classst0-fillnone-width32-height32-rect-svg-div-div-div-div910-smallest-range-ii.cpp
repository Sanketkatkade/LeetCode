class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = nums[nums.size() - 1] - nums[0];
        for(int i = 1; i < nums.size(); i++){
            int maxi = max(nums[nums.size() - 1] - k , nums[i-1] + k);
            int mini = min(nums[0] + k, nums[i] - k);
            ans = min(ans,maxi - mini);
        }
        return ans;
    }
};