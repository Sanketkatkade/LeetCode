class Solution {
public:
    int minSteps(string s, string t) {
       unordered_map<char,int>mp;
       for(auto x : s){
           mp[x]++;
       } 
       for(auto x : t){
           if(mp[x] > 0){
               mp[x]--;
           }
       }
        int count = 0;
       for(const auto& it : mp){
           count += it.second;
       }
       return count;
    }
};
