class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char, int> mp1;

        for (auto x : words[0]) {
            mp1[x]++;
        }

        map<char, int> mp2;

        for (int i = 1; i < words.size(); i++) {
            string word = words[i];
            for (auto x : word) {
                if (mp1.find(x) != mp1.end() && mp1[x] > 0) {
                    mp1[x]--;
                    mp2[x]++;
                }
            }
            mp1.clear();
            mp1 = mp2;
            mp2.clear();
        }

        vector<string> res;

        for (auto it : mp1) {
            int j = it.second;
            string s = "";
            s += it.first;
            while (j > 0) {
                res.push_back(s);
                j--;
            }
        }

        return res;
    }
};
