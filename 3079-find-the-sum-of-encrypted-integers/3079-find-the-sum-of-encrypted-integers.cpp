class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += maxDigit(nums[i]);
        }
        return sum;
    }

    int maxDigit(int n){
        int sum = 0;
        int maxi = 0;
        int temp = n;

        while(n){
            int digit = n % 10;
            maxi = max(maxi,digit);
            n /= 10;
        }

        while(temp){
            sum = sum * 10 + maxi;
            temp /= 10;
        }
        return sum;
    }
};