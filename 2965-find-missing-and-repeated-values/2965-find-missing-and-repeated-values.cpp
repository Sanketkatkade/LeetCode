class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid.size(); j++){
                mp[grid[i][j]]++;
            }
        }
        int repeat = 0;
        int miss = 0;
        int n = grid.size() * grid.size();
        for(int i = 1; i <= n; i++){
            if(mp[i] == 2){
                repeat = i;
            }
            if(mp[i] == 0){
                miss = i;
            }
        }
        return {repeat , miss};
    }
};