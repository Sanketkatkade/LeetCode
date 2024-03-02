class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
            int x=nums[i]*nums[i];
            v1.push_back(x);
        }
        sort(v1.begin(),v1.end());
        return v1;
    }
};