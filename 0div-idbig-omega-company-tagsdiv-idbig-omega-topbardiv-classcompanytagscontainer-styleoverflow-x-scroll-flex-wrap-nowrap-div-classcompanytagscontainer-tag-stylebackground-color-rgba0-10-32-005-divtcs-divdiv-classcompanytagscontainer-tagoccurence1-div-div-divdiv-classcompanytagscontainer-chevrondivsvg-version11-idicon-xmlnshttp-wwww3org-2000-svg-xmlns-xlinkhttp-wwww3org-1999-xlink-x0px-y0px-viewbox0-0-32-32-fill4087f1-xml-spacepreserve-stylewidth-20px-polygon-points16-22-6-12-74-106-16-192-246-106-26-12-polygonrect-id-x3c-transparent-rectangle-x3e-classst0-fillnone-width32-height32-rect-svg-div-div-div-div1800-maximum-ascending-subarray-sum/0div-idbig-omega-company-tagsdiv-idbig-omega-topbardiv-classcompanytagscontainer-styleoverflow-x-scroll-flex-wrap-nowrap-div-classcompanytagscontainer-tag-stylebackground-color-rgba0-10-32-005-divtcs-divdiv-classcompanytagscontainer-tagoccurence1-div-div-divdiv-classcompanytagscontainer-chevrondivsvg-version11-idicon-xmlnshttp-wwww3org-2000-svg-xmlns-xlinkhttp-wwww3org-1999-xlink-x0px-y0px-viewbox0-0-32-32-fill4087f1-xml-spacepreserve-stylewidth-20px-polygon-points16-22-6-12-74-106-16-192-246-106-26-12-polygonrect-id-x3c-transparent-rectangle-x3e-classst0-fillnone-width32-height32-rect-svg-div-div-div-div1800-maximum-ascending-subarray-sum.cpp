class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int Maxsum = 0;
        int CurrSum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
               CurrSum += nums[i];
            }
            else{
                Maxsum = max(Maxsum,CurrSum);
                CurrSum = nums[i];
            }
        }
        
        return max(Maxsum,CurrSum);
    }
};