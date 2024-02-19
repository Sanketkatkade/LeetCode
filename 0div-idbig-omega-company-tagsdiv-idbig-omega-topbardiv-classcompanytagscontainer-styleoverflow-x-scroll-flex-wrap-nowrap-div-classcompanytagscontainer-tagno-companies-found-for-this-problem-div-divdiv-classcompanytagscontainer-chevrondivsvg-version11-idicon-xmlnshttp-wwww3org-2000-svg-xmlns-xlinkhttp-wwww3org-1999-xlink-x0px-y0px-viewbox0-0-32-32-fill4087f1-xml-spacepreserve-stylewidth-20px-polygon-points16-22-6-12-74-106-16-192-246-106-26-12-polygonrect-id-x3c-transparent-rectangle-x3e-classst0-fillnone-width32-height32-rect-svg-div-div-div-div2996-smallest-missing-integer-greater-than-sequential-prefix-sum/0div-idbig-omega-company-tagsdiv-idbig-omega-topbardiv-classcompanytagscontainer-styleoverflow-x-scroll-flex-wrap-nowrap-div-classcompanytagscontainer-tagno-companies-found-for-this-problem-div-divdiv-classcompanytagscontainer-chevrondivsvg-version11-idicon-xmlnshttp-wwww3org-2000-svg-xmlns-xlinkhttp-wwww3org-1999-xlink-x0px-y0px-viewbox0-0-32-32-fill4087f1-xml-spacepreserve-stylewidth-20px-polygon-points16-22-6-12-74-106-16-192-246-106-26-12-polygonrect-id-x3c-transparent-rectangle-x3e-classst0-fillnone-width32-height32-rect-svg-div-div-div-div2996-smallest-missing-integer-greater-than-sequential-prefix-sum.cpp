class Solution {
public:
    int missingInteger(std::vector<int>& nums) {
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] + 1 == nums[i]) {
                sum += nums[i];
            } else {
                break;
            }
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (sum == nums[i]) {
                sum++;
            }
        }

        return sum;
    }
};