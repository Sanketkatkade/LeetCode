class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for (int i = left; i <= right; i++) {
            int count = 0;
            int num = i;
            while (num) {
                count += num & 1;
                num >>= 1;
            }

            if (isPrime(count)) {
                ans++;
            }
        }

        return ans;
    }
};
