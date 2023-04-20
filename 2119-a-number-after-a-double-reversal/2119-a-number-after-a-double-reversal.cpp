class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev_num = 0;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            rev_num = (rev_num * 10) + digit;
            temp /= 10;
        }
    
        int rev_rev_num = 0;
        temp = rev_num;
        while (temp > 0) {
            int digit = temp % 10;
            rev_rev_num = (rev_rev_num * 10) + digit;
            temp /= 10;
        }
        return rev_rev_num == num;
    }
};
