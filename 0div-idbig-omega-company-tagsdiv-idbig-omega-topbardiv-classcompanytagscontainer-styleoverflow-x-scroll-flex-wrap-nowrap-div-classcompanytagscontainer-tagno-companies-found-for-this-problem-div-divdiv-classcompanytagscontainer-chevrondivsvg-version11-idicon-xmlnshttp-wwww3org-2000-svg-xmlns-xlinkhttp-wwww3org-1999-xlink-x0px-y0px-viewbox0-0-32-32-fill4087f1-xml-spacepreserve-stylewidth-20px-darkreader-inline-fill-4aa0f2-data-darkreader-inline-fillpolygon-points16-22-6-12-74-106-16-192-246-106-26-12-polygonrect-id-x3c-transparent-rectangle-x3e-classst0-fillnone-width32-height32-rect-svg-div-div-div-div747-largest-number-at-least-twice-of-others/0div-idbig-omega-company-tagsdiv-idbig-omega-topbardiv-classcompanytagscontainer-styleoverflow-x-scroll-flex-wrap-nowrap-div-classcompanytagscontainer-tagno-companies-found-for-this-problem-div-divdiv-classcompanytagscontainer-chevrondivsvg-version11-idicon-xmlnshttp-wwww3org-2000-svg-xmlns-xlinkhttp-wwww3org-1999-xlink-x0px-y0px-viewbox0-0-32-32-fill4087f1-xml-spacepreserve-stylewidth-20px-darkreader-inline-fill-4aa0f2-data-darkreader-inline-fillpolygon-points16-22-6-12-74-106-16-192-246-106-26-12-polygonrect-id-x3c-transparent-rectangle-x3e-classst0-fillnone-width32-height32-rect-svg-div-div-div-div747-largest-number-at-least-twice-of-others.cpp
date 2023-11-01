class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int largest = INT_MIN;
       int index = -1;
       for(int i = 0; i < nums.size(); i++){
           if(nums[i] > largest){
               largest = nums[i];
               index = i;
           }
       } 
       for(int i = 0; i < nums.size(); i++){
           if(i != index && nums[i]*2 > largest){
               return -1;
           }
       }
       return index;
    }
};