class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());

        vector<int> res;
        int i = 0;
        while (i < even.size() || i < odd.size()) {
            if (i < even.size()) {
                res.push_back(even[i]);
            }
            if (i < odd.size()) {
                res.push_back(odd[i]);
            }
            i++;
        }
        return res;
    }
};
