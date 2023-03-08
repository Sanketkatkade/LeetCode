class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int number = nums[i];
            while(number!=0){
               int digit=number%10;
               v1.push_back(digit);
                number/=10;
            }
        }
        for(int i=0;i<v1.size();i++){
            sum2+=v1[i];
        }
        return sum1-sum2;
    }
};