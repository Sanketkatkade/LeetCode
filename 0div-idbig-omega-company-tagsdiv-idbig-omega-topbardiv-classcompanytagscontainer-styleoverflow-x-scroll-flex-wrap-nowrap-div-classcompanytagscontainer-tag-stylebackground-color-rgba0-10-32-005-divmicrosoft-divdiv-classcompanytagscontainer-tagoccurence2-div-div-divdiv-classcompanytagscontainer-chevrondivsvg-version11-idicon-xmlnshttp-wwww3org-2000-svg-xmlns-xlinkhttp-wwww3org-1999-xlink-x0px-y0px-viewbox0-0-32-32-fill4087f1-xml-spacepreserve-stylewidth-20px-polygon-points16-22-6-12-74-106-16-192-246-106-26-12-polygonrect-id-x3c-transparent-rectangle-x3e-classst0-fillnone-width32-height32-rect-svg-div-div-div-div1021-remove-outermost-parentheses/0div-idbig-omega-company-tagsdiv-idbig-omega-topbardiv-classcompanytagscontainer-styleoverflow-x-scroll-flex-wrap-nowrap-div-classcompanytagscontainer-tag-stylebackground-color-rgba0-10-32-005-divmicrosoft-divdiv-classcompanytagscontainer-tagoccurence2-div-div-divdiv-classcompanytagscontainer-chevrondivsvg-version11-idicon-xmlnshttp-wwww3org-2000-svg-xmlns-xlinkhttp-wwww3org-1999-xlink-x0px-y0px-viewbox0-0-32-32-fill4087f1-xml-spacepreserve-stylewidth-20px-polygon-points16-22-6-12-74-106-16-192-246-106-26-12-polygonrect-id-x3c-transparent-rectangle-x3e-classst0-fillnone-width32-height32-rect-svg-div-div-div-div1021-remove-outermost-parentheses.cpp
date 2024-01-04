class Solution {
public:
    std::string removeOuterParentheses(std::string s) {
        string res = "";
        int count = 0;

        for (auto x : s) {
            if (x == '(') {
                if (count > 0) {
                    res += x;
                }
                count++;
            } else if (x == ')') {
                count--;
                if (count > 0) {
                    res += x;
                } 
            }
        }
        return res;
    }
};