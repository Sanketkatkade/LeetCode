class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
        int n = nums.size();
        
        long long max1 = INT_MIN;
        long long max2 = INT_MIN;
        long long ans = 0;
        long long diff = 0;
        
        for(int i=0; i<n-1; i++){
            if(nums[i]>max1){
                max1 = nums[i];
                max2 = max1;
            }
            else {
                max2 = nums[i];
            }
            if(max1 == INT_MIN || max2 == INT_MIN){
                continue;
            } 
            long long curr_diff = max1-max2;
            diff = max(curr_diff, diff);
            long long curr_max = diff*1LL*nums[i+1];
            ans = max(curr_max, ans);
        }
        if(ans < 0){
            return 0;
        }
        return ans;
    }
};