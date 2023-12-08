class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int posInt = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                if(nums[i] == posInt){
                    posInt++;
                }
            }
        }
        return posInt;
    }
};