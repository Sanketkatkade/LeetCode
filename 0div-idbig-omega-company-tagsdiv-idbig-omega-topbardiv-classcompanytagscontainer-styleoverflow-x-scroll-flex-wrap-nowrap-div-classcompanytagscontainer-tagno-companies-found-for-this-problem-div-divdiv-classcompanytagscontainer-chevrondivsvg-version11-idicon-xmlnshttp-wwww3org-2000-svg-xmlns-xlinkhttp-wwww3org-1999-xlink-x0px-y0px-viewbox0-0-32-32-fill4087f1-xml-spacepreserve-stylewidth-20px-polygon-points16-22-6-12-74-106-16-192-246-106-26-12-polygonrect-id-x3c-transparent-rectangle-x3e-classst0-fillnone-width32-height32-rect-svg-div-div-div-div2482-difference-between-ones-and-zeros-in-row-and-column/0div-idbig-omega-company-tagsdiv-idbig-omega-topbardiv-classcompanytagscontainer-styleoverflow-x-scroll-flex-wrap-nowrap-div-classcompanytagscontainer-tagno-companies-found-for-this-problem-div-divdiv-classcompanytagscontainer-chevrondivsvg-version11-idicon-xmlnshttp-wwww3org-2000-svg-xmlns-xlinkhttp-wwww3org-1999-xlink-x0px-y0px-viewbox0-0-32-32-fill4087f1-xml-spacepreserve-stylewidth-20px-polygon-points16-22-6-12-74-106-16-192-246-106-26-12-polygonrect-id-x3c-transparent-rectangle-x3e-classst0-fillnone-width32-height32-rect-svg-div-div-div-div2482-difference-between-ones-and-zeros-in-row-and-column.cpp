class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>row(m,0);
        vector<int>col(n,0);
        vector<vector<int>>diff(m,vector<int>(n,0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j]){
                    row[i]++;
                    col[j]++;
                }
                else{
                    row[i]--;
                    col[j]--;
                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                diff[i][j] = row[i] + col[j];
            }
        }
        return diff;
    }
};