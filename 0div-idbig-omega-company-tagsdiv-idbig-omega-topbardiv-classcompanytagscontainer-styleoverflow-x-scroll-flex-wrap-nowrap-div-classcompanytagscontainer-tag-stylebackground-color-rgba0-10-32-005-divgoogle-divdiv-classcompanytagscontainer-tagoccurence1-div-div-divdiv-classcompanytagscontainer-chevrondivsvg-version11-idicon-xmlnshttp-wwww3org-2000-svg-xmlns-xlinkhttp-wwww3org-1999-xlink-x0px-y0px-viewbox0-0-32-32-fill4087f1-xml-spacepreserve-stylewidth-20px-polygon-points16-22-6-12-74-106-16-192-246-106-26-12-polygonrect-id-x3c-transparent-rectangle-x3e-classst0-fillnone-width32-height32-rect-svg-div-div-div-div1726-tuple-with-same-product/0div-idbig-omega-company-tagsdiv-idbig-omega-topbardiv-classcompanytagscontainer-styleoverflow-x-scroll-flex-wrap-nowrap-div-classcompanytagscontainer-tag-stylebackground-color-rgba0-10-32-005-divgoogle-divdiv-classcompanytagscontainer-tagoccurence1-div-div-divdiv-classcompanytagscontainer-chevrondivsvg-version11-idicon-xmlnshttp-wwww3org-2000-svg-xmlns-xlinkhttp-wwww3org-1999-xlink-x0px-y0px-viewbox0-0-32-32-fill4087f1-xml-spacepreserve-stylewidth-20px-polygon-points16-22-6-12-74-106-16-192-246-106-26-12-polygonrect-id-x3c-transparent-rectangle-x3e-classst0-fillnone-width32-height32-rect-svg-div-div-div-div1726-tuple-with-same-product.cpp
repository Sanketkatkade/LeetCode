class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
       unordered_map<int,int>mp;
       int res = 0;
       for(int i = 0; i < nums.size() -1; i++){
           for(int j = i+1; j < nums.size(); j++){
               int product = nums[i] * nums[j];
                res += 8 * mp[product];
                mp[product]++;
           }
       } 
       return res;
    }
};