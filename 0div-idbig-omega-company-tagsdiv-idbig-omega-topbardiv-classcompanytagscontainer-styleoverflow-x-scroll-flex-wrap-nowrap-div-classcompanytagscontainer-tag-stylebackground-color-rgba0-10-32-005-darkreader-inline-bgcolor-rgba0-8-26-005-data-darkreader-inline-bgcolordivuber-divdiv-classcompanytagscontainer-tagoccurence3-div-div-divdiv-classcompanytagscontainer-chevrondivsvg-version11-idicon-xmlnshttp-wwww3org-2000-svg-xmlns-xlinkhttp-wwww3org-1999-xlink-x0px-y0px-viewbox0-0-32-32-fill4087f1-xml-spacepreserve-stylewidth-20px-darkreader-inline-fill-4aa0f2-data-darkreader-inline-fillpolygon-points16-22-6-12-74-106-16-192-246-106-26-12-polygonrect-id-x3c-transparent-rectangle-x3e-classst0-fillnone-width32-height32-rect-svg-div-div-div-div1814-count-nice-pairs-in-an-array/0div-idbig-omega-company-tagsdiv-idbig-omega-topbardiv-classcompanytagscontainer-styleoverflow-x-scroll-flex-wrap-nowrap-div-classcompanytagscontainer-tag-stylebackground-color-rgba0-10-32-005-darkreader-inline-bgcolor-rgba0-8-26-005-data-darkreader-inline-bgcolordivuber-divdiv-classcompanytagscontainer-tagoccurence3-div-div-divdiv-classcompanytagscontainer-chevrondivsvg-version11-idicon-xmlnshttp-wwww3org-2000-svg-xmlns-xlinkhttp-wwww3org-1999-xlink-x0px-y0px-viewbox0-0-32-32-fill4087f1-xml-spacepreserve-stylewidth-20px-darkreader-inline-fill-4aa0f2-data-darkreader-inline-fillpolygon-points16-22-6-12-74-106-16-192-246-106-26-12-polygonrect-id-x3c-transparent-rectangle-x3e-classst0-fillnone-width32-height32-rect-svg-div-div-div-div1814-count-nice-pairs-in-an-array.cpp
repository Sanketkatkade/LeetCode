class Solution {
public:

    int rev(int n){
        int reverse = 0;
            while(n > 0){
                int digit = n % 10;
                reverse = reverse * 10 + digit;
                n /= 10;
            }
        return reverse;
    }

    int countNicePairs(vector<int>& nums) {
        int count = 0;
       unordered_map<int, int> reversedCount;

        for (int num : nums) {
            count = (count + reversedCount[num - rev(num)]++) % 1000000007;
        }
        return count;
    }
};