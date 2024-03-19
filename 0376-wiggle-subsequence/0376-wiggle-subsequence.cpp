class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
       int res = 1;
       int currDiff = 0;
       int prevDiff = 0;
       for(int i = 1; i < nums.size(); i++){
           currDiff = nums[i] - nums[i-1];
            if((currDiff > 0 && prevDiff <= 0) || currDiff  < 0 && prevDiff >= 0){
                    res++;
                    prevDiff = currDiff;
            }
       } 
       return res; 
    }
};
