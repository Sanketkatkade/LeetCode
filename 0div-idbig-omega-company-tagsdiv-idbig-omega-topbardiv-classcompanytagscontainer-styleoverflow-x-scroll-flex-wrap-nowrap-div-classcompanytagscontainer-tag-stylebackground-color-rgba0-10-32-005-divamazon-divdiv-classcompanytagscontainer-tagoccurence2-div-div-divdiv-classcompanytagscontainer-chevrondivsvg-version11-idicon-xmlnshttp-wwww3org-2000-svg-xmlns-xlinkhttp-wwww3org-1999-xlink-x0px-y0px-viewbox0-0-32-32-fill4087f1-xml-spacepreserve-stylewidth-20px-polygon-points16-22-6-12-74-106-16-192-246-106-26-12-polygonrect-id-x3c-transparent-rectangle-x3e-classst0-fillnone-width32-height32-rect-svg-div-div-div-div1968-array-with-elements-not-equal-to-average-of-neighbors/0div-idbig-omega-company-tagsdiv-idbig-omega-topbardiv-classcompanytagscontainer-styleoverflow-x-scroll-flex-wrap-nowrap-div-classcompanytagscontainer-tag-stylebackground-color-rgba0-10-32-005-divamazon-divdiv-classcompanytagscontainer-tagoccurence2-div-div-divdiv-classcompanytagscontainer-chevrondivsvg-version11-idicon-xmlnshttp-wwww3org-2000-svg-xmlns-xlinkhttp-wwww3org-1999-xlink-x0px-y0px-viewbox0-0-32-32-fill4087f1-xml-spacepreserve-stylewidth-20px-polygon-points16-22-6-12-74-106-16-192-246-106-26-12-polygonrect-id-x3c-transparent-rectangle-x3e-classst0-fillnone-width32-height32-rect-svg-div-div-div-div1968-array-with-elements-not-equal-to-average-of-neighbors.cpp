class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int i = 0;
        int j = nums.size()-1;
        
        while(i <= j){
            ans.push_back(nums[i]);
            if(i == j){
                break;
            }
            ans.push_back(nums[j]);
            i++;
            j--;

        }
        return ans;
    }
};