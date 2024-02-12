class Solution {
public:
    string sortString(string s) {
        map<char, int> mp;
        for (auto x : s) {
            mp[x]++;
        }

        string res = "";

        while (s.size() != res.size()) {
            for (auto x : mp) {
                if (x.second != 0) {
                    mp[x.first]--;
                    res += x.first;
                }
            }

            for (auto it = mp.rbegin(); it != mp.rend(); it++) {
                if (it->second != 0) {
                    mp[it->first]--;
                    res += it->first;
                }
            }
        }
        return res;
    }
};