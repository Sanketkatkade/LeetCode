class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> v;
        while (n > 0) {
            int digit = n % 10;
            v.push_back(digit);
            n /= 10;
        }
        reverse(v.begin(),v.end());
        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
           if (i % 2 == 0) {
                sum += v[i];
            } else {
                sum -= v[i];
            }
        }
        return sum;
    }
};
