class Solution {
public:
    std::string kthDistinct(std::vector<std::string>& arr, int k) {
        unordered_map<string, int> mp;
        for (auto x : arr) {
            mp[x]++;
        }

        int count = 0;

        for (string& it : arr) {
            if (mp[it] == 1) {
                count++;
                if (count == k) {
                    return it;
                }
            }
        }

        return "";
    }
};