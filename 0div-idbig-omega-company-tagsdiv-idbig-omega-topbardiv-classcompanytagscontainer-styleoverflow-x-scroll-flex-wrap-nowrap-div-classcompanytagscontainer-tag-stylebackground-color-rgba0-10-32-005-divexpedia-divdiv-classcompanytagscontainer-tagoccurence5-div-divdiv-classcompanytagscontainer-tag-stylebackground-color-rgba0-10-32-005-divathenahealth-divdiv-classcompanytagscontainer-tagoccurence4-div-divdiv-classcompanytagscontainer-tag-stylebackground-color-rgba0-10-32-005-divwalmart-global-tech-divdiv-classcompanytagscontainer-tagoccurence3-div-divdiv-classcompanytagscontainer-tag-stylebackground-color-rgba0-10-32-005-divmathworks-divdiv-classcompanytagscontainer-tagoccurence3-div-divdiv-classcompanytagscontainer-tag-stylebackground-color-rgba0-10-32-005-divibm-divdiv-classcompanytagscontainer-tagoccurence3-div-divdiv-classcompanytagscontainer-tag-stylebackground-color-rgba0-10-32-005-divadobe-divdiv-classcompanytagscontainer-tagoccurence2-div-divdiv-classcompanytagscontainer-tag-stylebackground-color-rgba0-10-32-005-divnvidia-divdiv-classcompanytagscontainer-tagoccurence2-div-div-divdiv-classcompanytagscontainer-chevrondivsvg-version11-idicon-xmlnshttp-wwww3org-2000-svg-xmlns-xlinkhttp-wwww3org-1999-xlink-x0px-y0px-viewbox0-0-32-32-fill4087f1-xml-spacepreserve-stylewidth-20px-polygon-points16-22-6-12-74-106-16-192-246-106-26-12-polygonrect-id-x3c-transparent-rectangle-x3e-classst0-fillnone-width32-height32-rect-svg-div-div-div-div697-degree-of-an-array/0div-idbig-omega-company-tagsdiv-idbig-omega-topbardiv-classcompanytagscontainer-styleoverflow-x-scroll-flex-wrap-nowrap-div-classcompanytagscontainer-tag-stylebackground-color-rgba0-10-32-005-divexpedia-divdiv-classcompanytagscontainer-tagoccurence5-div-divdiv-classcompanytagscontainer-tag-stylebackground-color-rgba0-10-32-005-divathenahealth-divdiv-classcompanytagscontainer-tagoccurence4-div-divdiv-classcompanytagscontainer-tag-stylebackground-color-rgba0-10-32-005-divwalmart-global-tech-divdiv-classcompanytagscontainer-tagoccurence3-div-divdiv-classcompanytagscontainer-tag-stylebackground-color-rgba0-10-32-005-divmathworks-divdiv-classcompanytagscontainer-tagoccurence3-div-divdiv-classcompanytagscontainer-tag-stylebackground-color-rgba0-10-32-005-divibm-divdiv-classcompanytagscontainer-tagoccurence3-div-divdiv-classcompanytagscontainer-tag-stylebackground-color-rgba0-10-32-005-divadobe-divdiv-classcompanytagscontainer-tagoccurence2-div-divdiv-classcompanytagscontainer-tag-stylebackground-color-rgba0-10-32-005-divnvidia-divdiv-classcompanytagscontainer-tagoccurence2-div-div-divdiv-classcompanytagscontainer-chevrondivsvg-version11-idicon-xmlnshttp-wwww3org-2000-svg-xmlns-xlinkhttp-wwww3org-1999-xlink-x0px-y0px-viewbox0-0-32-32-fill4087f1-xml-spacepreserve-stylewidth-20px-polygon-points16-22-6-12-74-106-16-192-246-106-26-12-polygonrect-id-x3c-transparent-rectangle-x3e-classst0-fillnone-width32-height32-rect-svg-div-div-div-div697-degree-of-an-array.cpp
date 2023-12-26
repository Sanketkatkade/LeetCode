class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto x : nums) {
            mp[x]++;
        }

        int maxi = 0;
        for (const auto& it : mp) {
            maxi = max(maxi, it.second);
        }

        vector<int> v;
        for (const auto& it : mp) {
            if (it.second == maxi) {
                v.push_back(it.first);
            }
        }

        int ans = INT_MAX;
        for (int i = 0; i < v.size(); i++) {
            int firstIndex = -1;
            int lastIndex = -1;
            for (int j = 0; j < nums.size(); ++j) {
                if (nums[j] == v[i]) {
                    if (firstIndex == -1) {
                        firstIndex = j;
                    }
                    lastIndex = j;
                }
            }
            ans = min(ans, lastIndex - firstIndex + 1);
        }
        return ans;
    }
};
