class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxLen;
        int ans = -1;
        for (int i = 0; i < s.size(); i++) {
            for (int j = s.size() - 1; j > i; j--) {
                if (s[j] == s[i]) {
                    maxLen = j - i - 1;
                    ans = max(ans,maxLen);
                }
            }
        }
        return ans;
    }
};