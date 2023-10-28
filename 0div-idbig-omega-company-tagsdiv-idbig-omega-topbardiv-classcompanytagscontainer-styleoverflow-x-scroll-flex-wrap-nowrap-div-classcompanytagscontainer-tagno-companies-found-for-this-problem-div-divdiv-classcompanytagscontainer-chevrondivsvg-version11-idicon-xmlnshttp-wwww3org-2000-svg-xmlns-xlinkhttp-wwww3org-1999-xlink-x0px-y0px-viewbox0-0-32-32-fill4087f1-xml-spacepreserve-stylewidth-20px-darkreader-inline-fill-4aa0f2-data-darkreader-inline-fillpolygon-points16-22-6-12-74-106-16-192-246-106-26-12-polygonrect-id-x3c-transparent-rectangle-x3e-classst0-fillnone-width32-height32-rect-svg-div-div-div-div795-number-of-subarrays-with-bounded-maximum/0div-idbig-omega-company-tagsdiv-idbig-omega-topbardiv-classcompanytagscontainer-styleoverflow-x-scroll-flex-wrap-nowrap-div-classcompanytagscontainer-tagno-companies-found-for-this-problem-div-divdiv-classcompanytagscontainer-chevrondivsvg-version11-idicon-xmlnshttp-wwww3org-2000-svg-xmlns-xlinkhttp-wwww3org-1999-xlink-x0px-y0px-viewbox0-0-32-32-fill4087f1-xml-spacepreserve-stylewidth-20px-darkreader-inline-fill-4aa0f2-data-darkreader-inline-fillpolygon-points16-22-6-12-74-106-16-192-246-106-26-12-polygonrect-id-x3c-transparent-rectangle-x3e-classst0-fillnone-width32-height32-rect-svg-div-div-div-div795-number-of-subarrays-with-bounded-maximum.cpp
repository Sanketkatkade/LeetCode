class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans = 0;
        int L = -1;
        int R = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > right){
                L = i;
            }
            if(nums[i] >= left){
                R = i;
            }
            ans += R - L;
        }
        return ans;
    }
};