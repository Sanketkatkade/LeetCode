class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>res;
        if(changed.size() < 2){
            return res;
        }
        sort(changed.begin(),changed.end());
        unordered_map<int,int>mp;
        for(auto x : changed){
            mp[x]++;
        }

        for(int i = 0; i < changed.size(); i++){
            if(mp[changed[i]] == 0){
                continue;
            }
            mp[changed[i]]--;
            if(mp[changed[i] * 2] == 0){
                return {};
            }
            mp[changed[i] * 2]--;
            res.push_back(changed[i]);
        }
        return res;
       
    }
};