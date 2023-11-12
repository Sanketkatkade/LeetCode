#include <vector>

class Solution {
public:
    bool isSorted(vector<int>& num) {
        for (int i = 0; i < num.size() - 1; i++) {
            if (num[i] > num[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool check(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (isSorted(nums)) {
                return true;
            } else {
                int temp = nums[0];
                for (int j = 0; j < nums.size() - 1; ++j) {
                    nums[j] = nums[j + 1];
                }
                nums[nums.size() - 1] = temp;
            }
        }
        return false;
    }
};
