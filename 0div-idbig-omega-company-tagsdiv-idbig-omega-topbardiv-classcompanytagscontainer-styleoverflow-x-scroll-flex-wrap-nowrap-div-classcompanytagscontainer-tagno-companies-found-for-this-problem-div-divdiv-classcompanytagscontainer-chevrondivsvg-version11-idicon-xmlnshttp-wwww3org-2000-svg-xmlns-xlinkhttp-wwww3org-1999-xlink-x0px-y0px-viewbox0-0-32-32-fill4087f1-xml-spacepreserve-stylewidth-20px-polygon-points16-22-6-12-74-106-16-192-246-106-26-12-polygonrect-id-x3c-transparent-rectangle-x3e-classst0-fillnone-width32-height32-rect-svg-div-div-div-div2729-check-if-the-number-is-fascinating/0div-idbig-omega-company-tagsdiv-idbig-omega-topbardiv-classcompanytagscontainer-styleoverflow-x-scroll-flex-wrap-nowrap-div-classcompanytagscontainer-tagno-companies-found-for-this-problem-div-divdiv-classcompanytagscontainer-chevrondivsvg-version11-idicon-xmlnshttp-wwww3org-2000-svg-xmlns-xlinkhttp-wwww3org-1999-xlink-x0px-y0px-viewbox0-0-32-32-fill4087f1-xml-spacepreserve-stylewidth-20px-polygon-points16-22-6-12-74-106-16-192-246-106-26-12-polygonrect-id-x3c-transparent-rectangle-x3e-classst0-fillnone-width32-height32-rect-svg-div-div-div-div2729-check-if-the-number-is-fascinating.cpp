class Solution {
public:
    bool isFascinating(int n) {
      vector<int> v;

        for (int i = 1; i <= 3; ++i) {
            int num = n * i;
            while (num > 0) {
                int digit = num % 10;
                v.push_back(digit);
                num /= 10;
            }
        }

        if (v.size() != 9) {
            return false;
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < 9; ++i) {
            if (v[i] != i + 1) {
                return false;
            }
        }

        return true;
    }
};
