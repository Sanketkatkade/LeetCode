class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>mp;
        vector<vector<int>>res;
        for(auto x : items1){
            mp[x[0]] += x[1];
        }
        for(auto x : items2){
            mp[x[0]] += x[1];
        }
        
        for(auto const& it : mp){
            res.push_back({it.first,it.second});
        }
        return res;
    }
};