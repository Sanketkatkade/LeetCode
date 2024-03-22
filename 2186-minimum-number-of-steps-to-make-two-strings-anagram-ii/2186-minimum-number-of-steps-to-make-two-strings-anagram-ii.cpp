class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto x : s){
            mp1[x]++;
        }
        for(auto x : t){
            mp2[x]++;
        }
        int res = 0;
        for(const auto& it : mp1){
            if(it.second != mp2[it.first]){
                int diff = abs(it.second - mp2[it.first]);
                res += diff;
            }
        }
        for(const auto& it : mp2){
            char c = it.first;
            if(mp1.find(c) == mp1.end()) {
                res += it.second; 
            }
        }
        return res;
    }
};