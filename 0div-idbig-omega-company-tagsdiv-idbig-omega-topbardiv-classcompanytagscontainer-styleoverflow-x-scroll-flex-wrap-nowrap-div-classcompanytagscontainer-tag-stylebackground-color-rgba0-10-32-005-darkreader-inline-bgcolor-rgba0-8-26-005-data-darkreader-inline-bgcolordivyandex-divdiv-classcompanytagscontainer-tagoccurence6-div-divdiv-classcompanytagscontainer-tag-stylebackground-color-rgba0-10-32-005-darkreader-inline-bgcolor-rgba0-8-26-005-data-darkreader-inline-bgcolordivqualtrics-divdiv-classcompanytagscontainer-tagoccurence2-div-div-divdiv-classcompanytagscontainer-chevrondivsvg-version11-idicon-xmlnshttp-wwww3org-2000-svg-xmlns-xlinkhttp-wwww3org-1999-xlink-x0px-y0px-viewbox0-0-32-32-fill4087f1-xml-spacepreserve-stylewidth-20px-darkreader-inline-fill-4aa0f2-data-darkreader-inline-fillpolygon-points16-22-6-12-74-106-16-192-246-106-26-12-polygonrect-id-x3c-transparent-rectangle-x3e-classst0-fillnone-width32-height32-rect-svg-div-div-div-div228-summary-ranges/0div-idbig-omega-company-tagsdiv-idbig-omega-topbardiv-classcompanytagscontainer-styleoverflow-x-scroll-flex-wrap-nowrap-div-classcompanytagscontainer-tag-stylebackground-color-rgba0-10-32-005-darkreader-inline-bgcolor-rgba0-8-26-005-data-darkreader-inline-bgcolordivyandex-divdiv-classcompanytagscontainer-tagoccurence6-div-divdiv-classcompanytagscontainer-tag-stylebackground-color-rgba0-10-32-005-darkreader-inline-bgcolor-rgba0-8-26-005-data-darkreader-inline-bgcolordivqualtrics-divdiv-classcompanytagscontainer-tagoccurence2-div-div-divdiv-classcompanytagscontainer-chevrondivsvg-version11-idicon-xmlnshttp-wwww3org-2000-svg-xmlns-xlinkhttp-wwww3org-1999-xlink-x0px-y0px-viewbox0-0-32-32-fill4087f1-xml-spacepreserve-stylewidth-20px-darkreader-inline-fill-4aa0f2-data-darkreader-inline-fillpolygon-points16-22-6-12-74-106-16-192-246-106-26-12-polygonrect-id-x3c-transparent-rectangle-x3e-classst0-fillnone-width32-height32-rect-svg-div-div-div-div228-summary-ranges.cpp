class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       vector<string>str;
        for(int i = 0; i < nums.size(); i++){
            int start = nums[i];
            while(i < nums.size()-1 && nums[i] + 1 == nums[i+1]){
                i++;
            }
            int end = nums[i];
            
            if(start == end){
                str.push_back(to_string(start));
            }
            else{
                str.push_back(to_string(start) + "->" + to_string(end));
            }
        }
        return str;
    }
};