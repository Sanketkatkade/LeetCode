class Solution {
public:
    bool checkPalindrome(string str) {
        int start = 0;
        int end = str.size() - 1;

        while (start <= end) {
            if (str[start] != str[end]) {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }

    int countSubstrings(string s) {
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                string str = s.substr(i, j - i + 1);
                if (checkPalindrome(str)) {
                    count++;
                }
            }
        }

        return count;
    }
};
