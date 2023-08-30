class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[n-1];
        long ans = 0;
        for(int i = n - 2; i >= 0; i--){
            int res = nums[i] / prev;
            if(nums[i] % prev != 0){
                res++;
                prev = nums[i] / res;
            }
            ans += res - 1;
        }
        return ans;
    }
};