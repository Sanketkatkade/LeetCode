class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> v;
            long long sum = 0;
            long long max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(max < nums[i]){
                max = nums[i];
            }
            sum += nums[i] + max;
            v.push_back(sum);
        }
        return v;
    }
};
