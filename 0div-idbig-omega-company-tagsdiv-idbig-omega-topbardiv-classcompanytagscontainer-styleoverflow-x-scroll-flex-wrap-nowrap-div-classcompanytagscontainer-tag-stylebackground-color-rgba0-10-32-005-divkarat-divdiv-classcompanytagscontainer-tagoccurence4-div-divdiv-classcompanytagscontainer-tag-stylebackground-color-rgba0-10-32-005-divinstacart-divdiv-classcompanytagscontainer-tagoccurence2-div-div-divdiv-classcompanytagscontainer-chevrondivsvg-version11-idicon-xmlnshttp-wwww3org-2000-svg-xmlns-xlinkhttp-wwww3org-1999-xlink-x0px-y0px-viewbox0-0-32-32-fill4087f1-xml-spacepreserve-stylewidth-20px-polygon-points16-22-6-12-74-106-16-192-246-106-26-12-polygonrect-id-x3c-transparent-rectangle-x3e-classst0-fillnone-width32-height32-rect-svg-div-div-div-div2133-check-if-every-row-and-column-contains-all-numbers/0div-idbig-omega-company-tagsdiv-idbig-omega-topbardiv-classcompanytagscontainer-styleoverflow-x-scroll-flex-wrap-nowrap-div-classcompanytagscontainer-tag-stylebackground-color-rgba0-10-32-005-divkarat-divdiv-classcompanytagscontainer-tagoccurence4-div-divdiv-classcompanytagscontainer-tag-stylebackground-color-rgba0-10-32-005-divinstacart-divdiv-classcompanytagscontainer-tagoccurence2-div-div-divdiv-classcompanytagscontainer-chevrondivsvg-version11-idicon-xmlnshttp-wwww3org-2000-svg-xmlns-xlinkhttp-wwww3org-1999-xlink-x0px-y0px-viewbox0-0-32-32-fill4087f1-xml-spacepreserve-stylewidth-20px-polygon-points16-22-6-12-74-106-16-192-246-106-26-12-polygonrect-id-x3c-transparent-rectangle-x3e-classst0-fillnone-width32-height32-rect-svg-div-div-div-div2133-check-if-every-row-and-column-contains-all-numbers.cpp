class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        unordered_set<int>s1,s2;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(s1.find(matrix[i][j]) != s1.end()){
                    return false;
                }
                else{
                    s1.insert(matrix[i][j]);
                }

                if(s2.find(matrix[j][i]) != s2.end()){
                    return false;
                }
                else{
                    s2.insert(matrix[j][i]);
                }
            }
            s1.clear();
            s2.clear();
        }
        return true;
    }
};






// class Solution {
// public:
//     bool checkValid(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         unordered_set<int>s;

//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < n; j++){
//                 int current = matrix[i][j];
//                 if(s.find(current) != s.end()){
//                     return false;
//                 }
//                 s.insert(current);
//             }
//             s.clear();
//         }

//         for(int j = 0; j < n; j++){
//             for(int i = 0; i < n; i++){
//                 int current = matrix[j][i];
//                 if(s.find(current) != s.end()){
//                     return false;
//                 }
//                 s.insert(current);
//             }
//             s.clear();
//         }
//         return true;
//     }
// };




