class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        unordered_map<char,int>mp;
        for(auto x : s){
            mp[x]++;
        }

        for(int i = 0; i < order.size(); i++){
            while(mp[order[i]] > 0){
                ans.push_back(order[i]);
                mp[order[i]]--;
            }
        }

        for(auto x : mp){
            while(x.second > 0){
                ans.push_back(x.first);
                x.second--;
            }
        }
        return ans;
    }
};