class Solution {
public:
    int minOperations(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(auto x : nums){
           mp[x]++;
       } 
       int count = 0;
       for(const auto& it : mp){
           if(it.second == 1){
               return -1;
           }
           else {
                count += (it.second / 3) + (it.second % 3 != 0);
            }
       }
           return count;
    }
};