class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        map<int,vector<int>>mp;
        for(auto x : pieces){
            mp[x[0]] = x;
        }
        vector<int>res;
        for(auto a : arr){
            if(mp.find(a) != mp.end()){
                res.insert(res.end(),mp[a].begin(),mp[a].end());
            }
        }
        return res == arr;
    }
};