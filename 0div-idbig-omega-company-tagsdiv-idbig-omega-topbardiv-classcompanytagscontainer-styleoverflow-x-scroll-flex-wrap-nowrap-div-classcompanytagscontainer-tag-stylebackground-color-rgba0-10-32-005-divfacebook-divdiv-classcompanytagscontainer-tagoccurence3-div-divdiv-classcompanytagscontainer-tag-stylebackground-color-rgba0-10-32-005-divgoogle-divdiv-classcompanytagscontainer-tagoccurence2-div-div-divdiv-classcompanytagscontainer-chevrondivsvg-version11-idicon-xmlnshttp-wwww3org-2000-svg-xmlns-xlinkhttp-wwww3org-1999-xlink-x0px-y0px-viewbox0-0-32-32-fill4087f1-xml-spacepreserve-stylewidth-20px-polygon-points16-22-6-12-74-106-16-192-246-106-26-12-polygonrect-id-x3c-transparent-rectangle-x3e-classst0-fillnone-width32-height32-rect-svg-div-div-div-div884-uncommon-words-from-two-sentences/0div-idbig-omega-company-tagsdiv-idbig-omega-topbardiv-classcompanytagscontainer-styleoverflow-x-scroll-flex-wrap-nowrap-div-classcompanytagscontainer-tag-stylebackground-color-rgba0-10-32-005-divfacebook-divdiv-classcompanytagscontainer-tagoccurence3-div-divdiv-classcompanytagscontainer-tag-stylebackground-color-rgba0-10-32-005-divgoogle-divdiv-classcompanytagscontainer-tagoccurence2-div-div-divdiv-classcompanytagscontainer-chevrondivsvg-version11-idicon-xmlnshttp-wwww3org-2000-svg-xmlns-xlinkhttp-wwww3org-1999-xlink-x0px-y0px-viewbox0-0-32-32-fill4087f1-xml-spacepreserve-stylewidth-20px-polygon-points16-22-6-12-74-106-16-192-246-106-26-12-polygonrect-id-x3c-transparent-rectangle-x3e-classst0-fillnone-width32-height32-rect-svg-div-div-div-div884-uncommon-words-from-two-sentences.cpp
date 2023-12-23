class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp1;

        istringstream iss1(s1);
        string word;
        while (iss1 >> word) {
            mp1[word]++;
        }

        istringstream iss2(s2);
        while (iss2 >> word) {
            mp1[word]++;
        }

        vector<string> str;
        for (const auto& it : mp1) {
            if (it.second == 1) {
                str.push_back(it.first);
            }
        }
        return str;
    }
};