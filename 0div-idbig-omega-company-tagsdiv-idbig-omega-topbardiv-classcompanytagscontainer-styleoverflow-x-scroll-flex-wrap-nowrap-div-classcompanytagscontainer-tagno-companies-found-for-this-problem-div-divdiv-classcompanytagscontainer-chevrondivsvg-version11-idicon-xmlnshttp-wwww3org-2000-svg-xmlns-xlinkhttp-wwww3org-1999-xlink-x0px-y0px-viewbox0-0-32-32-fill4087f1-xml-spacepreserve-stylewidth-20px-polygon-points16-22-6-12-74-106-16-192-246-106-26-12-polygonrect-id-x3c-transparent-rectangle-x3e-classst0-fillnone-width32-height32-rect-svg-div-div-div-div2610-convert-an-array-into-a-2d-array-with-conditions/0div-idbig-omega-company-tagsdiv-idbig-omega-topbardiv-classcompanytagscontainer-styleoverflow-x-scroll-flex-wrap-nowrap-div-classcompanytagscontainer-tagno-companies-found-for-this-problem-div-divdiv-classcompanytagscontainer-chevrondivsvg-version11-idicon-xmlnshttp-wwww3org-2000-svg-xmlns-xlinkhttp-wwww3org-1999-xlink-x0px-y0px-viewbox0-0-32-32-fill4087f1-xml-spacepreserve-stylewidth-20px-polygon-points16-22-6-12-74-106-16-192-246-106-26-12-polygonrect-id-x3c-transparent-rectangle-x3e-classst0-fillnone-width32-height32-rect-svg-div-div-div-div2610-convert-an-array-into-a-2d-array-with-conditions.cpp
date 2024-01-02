class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(auto x : nums){
           mp[x]++;
       } 
       vector<vector<int>>res;
       while(mp.size()){
           vector<int>v;
           for(auto i : mp){
               v.push_back(i.first);
           }
           for(auto i : v){
               if(!--mp[i]){
                   mp.erase(i);
               }
           }
           res.push_back(v);
       }
       return res;
    }
};