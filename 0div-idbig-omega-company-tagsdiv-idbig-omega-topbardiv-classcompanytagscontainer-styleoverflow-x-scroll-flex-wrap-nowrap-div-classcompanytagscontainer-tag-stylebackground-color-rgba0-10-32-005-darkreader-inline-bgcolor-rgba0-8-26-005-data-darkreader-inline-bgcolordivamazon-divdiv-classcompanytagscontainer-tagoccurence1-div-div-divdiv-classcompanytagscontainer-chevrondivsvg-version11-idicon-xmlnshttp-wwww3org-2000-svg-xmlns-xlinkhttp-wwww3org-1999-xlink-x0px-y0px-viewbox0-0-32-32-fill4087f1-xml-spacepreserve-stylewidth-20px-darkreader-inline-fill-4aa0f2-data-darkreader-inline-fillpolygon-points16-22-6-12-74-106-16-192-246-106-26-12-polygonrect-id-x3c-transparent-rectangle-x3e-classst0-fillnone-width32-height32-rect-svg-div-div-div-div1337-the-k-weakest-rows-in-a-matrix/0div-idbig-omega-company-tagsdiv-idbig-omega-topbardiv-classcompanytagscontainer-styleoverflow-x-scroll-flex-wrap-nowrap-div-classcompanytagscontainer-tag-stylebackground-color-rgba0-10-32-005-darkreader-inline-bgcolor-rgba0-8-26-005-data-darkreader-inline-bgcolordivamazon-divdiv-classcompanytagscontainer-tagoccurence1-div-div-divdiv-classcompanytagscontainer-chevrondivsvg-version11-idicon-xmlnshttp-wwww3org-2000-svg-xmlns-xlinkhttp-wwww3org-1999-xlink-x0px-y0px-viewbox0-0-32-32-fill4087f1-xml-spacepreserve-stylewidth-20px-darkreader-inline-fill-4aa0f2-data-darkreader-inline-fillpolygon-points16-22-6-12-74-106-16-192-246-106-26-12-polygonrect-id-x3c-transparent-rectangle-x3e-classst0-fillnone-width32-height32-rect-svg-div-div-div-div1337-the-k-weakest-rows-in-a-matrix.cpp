class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();

        set<pair<int, int>> s;
        
        for (int i = 0; i < row; i++) {
            int count = 0;
            for (int j = 0; j < col; j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }
            s.insert(make_pair(count, i));
        }

        vector<int> res;
        
        for (auto it = s.begin(); it != s.end() && k > 0; k--, it++) {
            res.push_back(it->second);
        }
        
        return res;
    }
};
