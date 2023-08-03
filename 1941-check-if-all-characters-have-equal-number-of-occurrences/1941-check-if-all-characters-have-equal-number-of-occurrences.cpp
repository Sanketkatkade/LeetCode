class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> m;
        for (auto i : s) {
            m[i]++;
        }

        for (auto it = m.begin(); it != m.end(); it++) {
            if (next(it) != m.end() && it->second != next(it)->second) {
                return false;
            }
        }

        return true;
    }
};
