class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(char ch : s){
            mp[ch]++;
        }
        vector<pair<int,char>>v;
        for(auto & res : mp){
            v.push_back({res.second,res.first});
        }

        sort(v.begin(),v.end());

        string ans = "";
        for(int i = v.size()-1; i >= 0; i--){
            int x = v[i].first;
            int y = v[i].second;
            while(x > 0){
                ans += y;
                x--;
            }
        }
        return ans;
    }
};