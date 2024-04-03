class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        set<int>s1;
        set<int>s2;
        for(int i = 0; i < n; i++){
            s1.clear();
            s2.clear();
            for(int j = 0; j <= i; j++){
                s1.insert(nums[j]);
            }
            for(int k = i+1; k < n; k++){
                s2.insert(nums[k]);
            }
            ans[i] = s1.size() - s2.size();
        }
        return ans;
    }
};