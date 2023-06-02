class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1 = 0;
        int sum2 = 0;
        
        if (mat.size() % 2 != 0) {
            for (int i = 0; i < mat.size(); i++) {
                sum1 += mat[i][i];
            }
            
            for (int i = 0; i < mat.size(); i++) {
                sum2 += mat[i][mat.size() - 1 - i];
            }
            
            return sum1 + sum2 - mat[mat.size() / 2][mat.size() / 2];
        } 
        else {
            for (int i = 0; i < mat.size(); i++) {
                sum1 += mat[i][i];
            }
            
            for (int i = 0; i < mat.size(); i++) {
                sum2 += mat[i][mat.size() - 1 - i];
            }
            
            return sum1 + sum2;
        }
    }
};
