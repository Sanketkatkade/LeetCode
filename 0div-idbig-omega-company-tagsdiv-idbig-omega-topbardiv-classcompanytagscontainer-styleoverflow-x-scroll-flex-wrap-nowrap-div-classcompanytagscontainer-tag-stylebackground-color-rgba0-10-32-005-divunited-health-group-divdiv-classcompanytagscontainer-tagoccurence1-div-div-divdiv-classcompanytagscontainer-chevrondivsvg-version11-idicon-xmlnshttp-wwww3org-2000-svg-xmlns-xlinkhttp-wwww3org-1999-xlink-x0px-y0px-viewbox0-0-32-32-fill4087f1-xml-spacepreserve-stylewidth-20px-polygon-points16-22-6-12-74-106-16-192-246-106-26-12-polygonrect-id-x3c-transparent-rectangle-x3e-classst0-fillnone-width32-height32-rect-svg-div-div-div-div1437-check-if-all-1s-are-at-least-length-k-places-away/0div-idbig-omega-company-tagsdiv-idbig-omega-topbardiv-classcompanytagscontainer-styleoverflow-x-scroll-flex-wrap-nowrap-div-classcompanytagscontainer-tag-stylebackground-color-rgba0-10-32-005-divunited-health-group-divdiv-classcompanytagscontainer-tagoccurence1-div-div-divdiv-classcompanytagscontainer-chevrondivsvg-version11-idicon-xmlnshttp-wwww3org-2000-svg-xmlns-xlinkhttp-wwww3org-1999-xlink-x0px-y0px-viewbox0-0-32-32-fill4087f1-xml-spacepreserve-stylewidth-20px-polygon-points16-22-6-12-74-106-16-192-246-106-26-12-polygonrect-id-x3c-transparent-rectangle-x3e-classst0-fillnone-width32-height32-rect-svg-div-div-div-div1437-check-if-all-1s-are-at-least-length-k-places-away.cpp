#include <vector>

class Solution {
public:
    bool kLengthApart(std::vector<int>& nums, int k) {
        int count = k;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (count < k) {
                    return false;
                }
                count = 0;
            } 
            else {
                count++;
            }
        }
        return true;
    }
};
