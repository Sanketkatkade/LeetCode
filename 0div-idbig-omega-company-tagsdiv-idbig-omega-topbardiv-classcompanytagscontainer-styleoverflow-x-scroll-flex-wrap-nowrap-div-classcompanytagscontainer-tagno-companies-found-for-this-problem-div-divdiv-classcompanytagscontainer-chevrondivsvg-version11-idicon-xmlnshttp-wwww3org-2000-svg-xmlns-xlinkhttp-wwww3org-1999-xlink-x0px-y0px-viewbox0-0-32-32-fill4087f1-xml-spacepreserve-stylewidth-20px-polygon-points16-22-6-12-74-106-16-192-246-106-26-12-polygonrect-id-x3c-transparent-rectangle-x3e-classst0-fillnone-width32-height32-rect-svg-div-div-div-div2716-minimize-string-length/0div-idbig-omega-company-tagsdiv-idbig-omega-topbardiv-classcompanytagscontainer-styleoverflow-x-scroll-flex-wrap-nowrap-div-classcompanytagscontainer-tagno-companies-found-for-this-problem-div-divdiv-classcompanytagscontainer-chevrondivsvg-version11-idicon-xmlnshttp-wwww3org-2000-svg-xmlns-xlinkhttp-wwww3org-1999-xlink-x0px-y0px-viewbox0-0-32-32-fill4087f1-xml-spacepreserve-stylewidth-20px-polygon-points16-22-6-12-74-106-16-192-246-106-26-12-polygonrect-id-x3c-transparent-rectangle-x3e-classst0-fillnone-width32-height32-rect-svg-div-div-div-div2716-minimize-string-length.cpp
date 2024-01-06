// class Solution {
// public:
//     int minimizedStringLength(string s) {
//         string ans = "";
//         ans.push_back(s[0]);
//         for(int i = 1; i < s.size(); i++){
//             if(!ans.empty() && s[i] == ans.back()){
//                 ans.pop_back();
//                 ans.push_back(s[i]);
//             }
//             else{
//                 ans.push_back(s[i]);
//             }
//         }
//         return ans.size();
//     }
// };

class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char,int>mp;
        for(auto x : s){
            mp[x]++;
        }
        return mp.size();
    }
};