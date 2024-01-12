class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int,int>,int>seen;
        int res = 0;
        for(auto & x : dominoes){
            if(x[0] > x[1]){
                swap(x[0],x[1]);
            }
            res += seen[make_pair(x[0],x[1])]++;
        }
        return res;
    }
};







// TLE

// class Solution {
// public:
//     int numEquivDominoPairs(vector<vector<int>>& dominoes) {
//         int res = 0;
//         for(int i = 0; i < dominoes.size(); i++){
//             for(int j = i+1; j < dominoes.size(); j++){
//                 if((dominoes[i][0] == dominoes[j][0] && dominoes[i][1] == dominoes[j][1])|| dominoes[i][0] == dominoes[j][1] && dominoes[i][1] == dominoes[j][0]){
//                     res++;
//                 }
//             }
//         }
//         return res;
//     }
// };