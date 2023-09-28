class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                v1.push_back(nums[i]);
            }
            else {
                v2.push_back(nums[i]);
            }
        }
        
        nums.clear();
        nums.insert(nums.end(), v1.begin(), v1.end());
        nums.insert(nums.end(), v2.begin(), v2.end());
        
        return nums;
    }
};
