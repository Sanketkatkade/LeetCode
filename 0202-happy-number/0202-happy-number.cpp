class Solution {
    int calcSum(int n) {
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        int count = 50;
        while (count--) {
            n = calcSum(n);
            if (n == 1) {
                return true;
            }
        }
        return false;
    }
};
