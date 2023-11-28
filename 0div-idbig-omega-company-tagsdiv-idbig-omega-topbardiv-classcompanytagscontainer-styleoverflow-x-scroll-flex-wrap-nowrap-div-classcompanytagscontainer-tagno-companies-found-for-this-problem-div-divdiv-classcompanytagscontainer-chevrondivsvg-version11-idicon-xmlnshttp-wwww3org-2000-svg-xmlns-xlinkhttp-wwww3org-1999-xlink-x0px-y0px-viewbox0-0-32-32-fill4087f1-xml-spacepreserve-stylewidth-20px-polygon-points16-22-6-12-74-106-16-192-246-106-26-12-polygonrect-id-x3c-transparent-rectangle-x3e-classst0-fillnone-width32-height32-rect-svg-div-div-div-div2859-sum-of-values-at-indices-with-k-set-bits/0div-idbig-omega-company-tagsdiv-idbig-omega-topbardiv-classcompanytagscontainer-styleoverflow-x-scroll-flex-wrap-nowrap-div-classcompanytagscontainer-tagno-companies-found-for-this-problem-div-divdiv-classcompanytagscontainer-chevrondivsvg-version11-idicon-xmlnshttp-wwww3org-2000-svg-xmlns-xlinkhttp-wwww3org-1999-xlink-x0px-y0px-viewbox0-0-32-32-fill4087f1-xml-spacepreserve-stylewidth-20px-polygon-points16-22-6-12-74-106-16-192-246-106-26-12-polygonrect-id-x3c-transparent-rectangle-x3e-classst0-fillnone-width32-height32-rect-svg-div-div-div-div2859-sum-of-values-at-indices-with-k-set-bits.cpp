class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = i;
            int count = 0;
            while (num > 0) {
                 if (num & 1) {
                    count++;
                }
                num = num >> 1;
            }
            if (count == k) {
                sum += nums[i];
            }
            cout<<count<<" ";
        }
        return sum;
    }
};
