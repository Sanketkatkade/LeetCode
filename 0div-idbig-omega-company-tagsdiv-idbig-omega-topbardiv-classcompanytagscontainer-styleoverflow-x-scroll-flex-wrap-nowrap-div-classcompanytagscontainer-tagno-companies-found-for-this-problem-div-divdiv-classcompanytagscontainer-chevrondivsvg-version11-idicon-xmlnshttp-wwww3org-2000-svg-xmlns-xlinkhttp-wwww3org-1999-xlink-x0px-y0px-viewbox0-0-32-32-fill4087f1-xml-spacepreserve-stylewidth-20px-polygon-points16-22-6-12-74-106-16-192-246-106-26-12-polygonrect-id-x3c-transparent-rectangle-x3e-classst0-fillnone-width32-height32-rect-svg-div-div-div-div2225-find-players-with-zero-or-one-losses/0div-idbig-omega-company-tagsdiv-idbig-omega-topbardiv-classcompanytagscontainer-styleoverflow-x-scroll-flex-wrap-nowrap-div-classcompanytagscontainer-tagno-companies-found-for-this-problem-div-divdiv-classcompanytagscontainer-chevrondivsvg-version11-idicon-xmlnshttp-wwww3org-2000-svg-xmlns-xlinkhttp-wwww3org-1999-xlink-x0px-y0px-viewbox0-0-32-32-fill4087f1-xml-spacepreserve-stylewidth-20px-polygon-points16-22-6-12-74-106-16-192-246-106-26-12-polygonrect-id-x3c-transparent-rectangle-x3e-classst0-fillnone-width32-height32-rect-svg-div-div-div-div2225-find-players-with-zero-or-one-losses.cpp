class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       unordered_map<int,int>mp;
       vector<vector<int>>res(2);
       for(int i = 0; i < matches.size(); i++){
           mp[matches[i][1]]++;
        }

        for(auto i = mp.begin(); i != mp.end(); i++){
            if(i -> second == 1){
                res[1].push_back(i -> first);
            }
        } 

        for(int i = 0; i < matches.size(); i++){
            if(mp[matches[i][0]] == 0){
                res[0].push_back(matches[i][0]);
            }
            mp[matches[i][0]] = 1;
        }

        sort(res[0].begin(),res[0].end());
        sort(res[1].begin(),res[1].end());

        return res;
    }
};