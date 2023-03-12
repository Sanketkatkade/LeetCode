class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int>v1;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                v1.push_back(nums[i]);
            }
        }
        for(int i=0;i<v1.size();i++){
            sum+=v1[i];
        }
        if(v1.size()>0){
        return (sum)/(v1.size());
        }
        return sum;
    }
};