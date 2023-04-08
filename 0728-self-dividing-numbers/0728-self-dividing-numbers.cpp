class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v1;
        for (int i = left; i <= right; i++) {
            int temp = i;
            vector<int> v;
            while (temp > 0) {
                int digit = temp % 10;
                temp /= 10;                
                v.push_back(digit);
            }
            int count = 0;
            for (int j = 0; j < v.size(); j++) {
                if (v[j] != 0 && i % v[j] == 0) {
                    count++;
                }
            }
            if (count == v.size()) {
                v1.push_back(i);
            }
        }
        return v1;
    }
};
