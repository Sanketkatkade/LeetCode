class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>v;
        map<int,int>ans;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[i].size(); j++){
                ans[nums[i][j]]++;
            }
        }
        for(auto ele : ans){
            if(ele.second == nums.size()){
                v.push_back(ele.first);
            }
        }
        return v;
    }
};