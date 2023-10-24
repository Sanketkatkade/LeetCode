class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>v;
        
        for(int i = 0; i < nums.size(); i++){
            v.push_back(nums[i]);
        }
        
        for(int i = 0; i < nums.size(); i++){
            int revNum = 0;
            while(nums[i] > 0){
                revNum = revNum * 10 + (nums[i] % 10);
                nums[i] /= 10;
            }
            v.push_back(revNum);
        }
        
        sort(v.begin(),v.end());
        auto it = unique(v.begin(),v.end());
        v.erase(it,v.end());
        
        return v.size();
    }
};