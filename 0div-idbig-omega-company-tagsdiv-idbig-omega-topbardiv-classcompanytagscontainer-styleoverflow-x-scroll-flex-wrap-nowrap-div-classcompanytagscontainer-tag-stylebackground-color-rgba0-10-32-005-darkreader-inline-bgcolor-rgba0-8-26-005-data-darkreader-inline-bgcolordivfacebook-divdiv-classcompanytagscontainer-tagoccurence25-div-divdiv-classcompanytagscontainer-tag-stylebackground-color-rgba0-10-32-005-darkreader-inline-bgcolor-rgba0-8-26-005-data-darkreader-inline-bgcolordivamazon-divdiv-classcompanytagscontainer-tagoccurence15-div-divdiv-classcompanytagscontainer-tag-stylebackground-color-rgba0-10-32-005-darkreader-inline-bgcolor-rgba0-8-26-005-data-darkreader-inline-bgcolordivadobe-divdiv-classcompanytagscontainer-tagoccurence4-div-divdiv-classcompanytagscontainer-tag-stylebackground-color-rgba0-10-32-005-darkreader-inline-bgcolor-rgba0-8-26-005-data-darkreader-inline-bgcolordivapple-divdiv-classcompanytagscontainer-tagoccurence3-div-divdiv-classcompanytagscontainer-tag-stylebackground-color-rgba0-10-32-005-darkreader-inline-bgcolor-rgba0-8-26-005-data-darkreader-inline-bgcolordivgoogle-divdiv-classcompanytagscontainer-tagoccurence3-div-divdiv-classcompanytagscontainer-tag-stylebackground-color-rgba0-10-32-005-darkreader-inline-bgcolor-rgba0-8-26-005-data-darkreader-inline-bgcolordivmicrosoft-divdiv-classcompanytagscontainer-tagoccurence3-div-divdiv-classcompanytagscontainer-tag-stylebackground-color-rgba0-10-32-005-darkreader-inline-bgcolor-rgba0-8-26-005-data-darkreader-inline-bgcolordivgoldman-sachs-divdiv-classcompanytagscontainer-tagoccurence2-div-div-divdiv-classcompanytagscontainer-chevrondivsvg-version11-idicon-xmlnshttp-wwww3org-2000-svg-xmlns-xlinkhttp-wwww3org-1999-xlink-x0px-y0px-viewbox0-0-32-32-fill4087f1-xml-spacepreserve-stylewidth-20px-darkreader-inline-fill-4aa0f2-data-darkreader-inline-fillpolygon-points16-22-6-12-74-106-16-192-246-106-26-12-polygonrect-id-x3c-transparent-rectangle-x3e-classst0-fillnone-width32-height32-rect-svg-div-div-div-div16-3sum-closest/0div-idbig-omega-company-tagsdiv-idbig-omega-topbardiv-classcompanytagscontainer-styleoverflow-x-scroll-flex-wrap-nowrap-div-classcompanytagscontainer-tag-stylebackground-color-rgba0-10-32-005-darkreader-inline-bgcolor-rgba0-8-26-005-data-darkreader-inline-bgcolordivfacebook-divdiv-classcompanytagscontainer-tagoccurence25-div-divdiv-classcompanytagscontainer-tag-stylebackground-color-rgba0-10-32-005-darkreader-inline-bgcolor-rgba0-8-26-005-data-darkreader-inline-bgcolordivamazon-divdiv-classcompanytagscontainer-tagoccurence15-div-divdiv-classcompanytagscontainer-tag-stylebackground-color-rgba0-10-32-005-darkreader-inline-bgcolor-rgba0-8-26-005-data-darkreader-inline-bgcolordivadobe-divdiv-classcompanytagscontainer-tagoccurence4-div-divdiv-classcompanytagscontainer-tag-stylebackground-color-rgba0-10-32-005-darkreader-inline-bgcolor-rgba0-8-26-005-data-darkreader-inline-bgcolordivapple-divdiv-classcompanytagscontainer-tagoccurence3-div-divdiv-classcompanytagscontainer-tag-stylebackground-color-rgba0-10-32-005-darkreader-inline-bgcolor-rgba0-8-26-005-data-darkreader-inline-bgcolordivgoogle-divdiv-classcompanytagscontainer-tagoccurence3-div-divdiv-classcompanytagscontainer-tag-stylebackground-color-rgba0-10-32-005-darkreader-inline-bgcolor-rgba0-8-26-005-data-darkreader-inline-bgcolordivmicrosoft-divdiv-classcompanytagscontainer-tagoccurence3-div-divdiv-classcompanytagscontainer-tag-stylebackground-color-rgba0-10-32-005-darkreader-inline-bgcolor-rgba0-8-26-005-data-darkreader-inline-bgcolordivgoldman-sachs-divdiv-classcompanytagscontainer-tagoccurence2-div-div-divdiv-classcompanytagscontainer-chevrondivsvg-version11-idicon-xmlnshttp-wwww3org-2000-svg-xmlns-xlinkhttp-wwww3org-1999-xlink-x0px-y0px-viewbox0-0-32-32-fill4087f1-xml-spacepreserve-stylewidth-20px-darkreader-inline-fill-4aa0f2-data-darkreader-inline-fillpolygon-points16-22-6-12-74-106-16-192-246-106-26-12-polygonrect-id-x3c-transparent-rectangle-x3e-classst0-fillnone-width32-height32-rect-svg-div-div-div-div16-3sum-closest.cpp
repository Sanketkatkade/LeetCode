class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++) {
            int low = i + 1;
            int high = n - 1;

            while (low < high) {
                int sum = nums[i] + nums[low] + nums[high];

                if (abs(sum - target) < abs(res - target)) {
                    res = sum;
                }

                if (sum > target) {
                    high--;
                } else if (sum < target) {
                    low++;
                } else {
                    return sum;
                }
            }
        }
        return res;
    }
};
