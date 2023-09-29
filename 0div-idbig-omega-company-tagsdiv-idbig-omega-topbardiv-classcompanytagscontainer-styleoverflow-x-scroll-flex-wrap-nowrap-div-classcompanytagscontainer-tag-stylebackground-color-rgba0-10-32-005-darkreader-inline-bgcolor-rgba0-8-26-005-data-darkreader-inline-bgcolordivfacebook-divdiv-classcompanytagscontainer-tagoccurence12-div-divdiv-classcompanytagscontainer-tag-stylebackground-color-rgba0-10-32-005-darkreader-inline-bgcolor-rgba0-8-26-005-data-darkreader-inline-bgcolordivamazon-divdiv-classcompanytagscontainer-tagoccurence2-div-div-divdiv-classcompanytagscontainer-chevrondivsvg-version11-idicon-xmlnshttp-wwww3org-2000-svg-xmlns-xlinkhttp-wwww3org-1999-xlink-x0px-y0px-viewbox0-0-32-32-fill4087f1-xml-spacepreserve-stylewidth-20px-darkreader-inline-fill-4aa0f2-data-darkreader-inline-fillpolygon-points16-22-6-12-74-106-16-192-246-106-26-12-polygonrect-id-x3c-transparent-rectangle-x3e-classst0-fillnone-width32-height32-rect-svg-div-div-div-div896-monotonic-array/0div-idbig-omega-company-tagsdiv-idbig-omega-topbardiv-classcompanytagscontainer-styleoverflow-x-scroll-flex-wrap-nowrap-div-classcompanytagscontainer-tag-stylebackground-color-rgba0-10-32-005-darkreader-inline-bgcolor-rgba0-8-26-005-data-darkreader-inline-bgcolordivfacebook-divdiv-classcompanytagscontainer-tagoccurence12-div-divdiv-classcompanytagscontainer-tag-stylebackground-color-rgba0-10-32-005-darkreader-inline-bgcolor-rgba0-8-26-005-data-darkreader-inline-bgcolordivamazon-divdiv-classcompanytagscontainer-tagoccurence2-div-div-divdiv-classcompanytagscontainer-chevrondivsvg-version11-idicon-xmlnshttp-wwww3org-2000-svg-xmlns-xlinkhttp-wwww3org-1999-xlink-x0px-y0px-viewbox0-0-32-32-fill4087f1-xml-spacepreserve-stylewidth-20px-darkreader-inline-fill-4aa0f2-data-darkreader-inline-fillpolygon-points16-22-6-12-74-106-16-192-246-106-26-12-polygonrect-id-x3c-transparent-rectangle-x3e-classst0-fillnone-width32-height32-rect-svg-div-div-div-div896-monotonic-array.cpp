class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int count1 = 1;
        int count2 = 1;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                count1++;
            }
            else if(nums[i] == nums[i+1]){
                count1++;
                count2++;
            }
            else{
                count2++;
            }
        }
        if(count1 == nums.size() || count2 == nums.size()){
            return true;
        }
        return false;
    }
};