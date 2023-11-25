#include <vector>

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            rightsum += nums[i];
        }

        for(int i = 0; i < n; i++) {
            rightsum -= nums[i];
            leftsum += nums[i];
            nums[i] = rightsum - nums[i] * (n - i - 1) - leftsum + nums[i] * (i + 1);
        }

        return nums;
    }
};
