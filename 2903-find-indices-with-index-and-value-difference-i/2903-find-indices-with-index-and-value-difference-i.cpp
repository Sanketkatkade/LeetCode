class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {  
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(abs(i - j) >= indexDifference && abs(nums[i] - nums[j]) >= valueDifference){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        if(indexDifference == 0 && valueDifference == 0){
            return {0,0};
        }
        return {-1,-1};
    }
};