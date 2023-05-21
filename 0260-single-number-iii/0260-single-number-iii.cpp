class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        unordered_map<int, int>freq;
        for(int num : nums){
            freq[num]++;
        }

        for(int num : nums){
            if(freq[num]==1){
                v.push_back(num);
            }
        }

        return v;
    }
};