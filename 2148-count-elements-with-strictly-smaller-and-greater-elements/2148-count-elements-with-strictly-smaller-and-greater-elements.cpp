class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            int greater = 0;
            int smaller = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] > nums[j]){
                    greater++;
                }
                if(nums[i] < nums[j]){
                    smaller++;
                }
            }
            if(greater > 0 && smaller > 0){
                count++;
            }
        }
        return count;
    }
};