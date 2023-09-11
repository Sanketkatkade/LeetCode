class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for (int num : nums) {
            m[num]++;
        }

        int max = 0;
        int res = 0;
        for (const auto& element : m) {
            if (element.second > max) {
                max = element.second;
                res = element.first;
            }
        }
        return res;
    }
};
