class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        int leftSum = 0;
        int rightSum = 0;
        
        v1.push_back(0);
        for (int i = 0; i < nums.size() - 1; i++) {
            leftSum += nums[i];
            v1.push_back(leftSum);
        }
        
        v2.push_back(0);
        for (int i = nums.size() - 1; i > 0; i--) {
            rightSum += nums[i];
            v2.push_back(rightSum);
        }
        reverse(v2.begin(), v2.end());
        
        for (int i = 0; i < v1.size(); i++) {
            v3.push_back(abs(v1[i] - v2[i]));
        }
        
        return v3;
    }
};
