class Solution {
public:
    int countDigits(int num) {
        vector<int> v;
        int number = num;
        while (number > 0) {
            int digit = number % 10;
            v.push_back(digit);
            number /= 10;
        }
        
        int count = 0;
        for (int i = 0; i < v.size(); i++) {
            if (num % v[i] == 0) {
                count++;
            }
        }
        
        return count;
    }
};
