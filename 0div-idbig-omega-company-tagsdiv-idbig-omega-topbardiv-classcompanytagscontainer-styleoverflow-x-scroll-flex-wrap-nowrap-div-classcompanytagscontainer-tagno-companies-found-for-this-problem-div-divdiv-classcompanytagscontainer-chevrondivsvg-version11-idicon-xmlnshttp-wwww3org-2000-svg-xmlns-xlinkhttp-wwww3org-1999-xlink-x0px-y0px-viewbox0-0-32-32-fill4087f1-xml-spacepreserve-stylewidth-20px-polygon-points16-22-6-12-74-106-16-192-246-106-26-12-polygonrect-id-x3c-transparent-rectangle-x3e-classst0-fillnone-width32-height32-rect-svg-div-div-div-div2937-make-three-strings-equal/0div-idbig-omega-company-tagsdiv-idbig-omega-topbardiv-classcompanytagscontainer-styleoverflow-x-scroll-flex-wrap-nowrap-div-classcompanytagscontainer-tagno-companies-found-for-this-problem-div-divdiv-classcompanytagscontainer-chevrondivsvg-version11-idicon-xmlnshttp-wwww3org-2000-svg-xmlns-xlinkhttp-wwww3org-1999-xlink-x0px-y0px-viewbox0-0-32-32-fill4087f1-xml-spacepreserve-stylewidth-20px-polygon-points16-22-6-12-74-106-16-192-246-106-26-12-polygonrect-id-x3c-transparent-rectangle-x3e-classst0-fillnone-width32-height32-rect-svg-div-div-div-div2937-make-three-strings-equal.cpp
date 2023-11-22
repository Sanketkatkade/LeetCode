class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int ln = min({s1.size(), s2.size(), s3.size()});
        int count = 0;
        for (int i = 0; i < ln; i++) {
            if (s1[i] == s2[i] && s1[i] == s3[i]) {
                count++;
            }
            else {
                break;
            }
        }
        int ans = 0;
        if (!count) {
            return -1;
        }
        ans += s1.size() - count;
        ans += s2.size() - count;
        ans += s3.size() - count;

        return ans;
    }
};
