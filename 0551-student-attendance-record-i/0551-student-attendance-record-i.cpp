class Solution {
public:
    bool checkRecord(string s) {
        int count_A = 0;
        int count_L = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                count_A++;
            }
            if ( s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L') {
                count_L++;
            }
        }
        if (count_A >= 2 || count_L >= 1) {
            return false;
        }
        return true;
    }
};
