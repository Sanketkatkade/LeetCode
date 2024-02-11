class Solution {
public:
    vector<int> divisibilityArray(std::string word, int m) {
        vector<int> res;
        long long num = 0;
        for(int i = 0; i < word.size(); i++){
            num = (num * 10 + (word[i] - '0')) % m;
            if(num == 0){
                res.push_back(1);
            }
            else{
                res.push_back(0);
            }
        }
        return res;
    }
};


// class Solution {
// public:
//     vector<int> divisibilityArray(std::string word, int m) {
//         vector<int> res;
//         for(int i = 0; i < word.size(); i++) {
//             long long number = 0;
//             for(int j = 0; j <= i; j++) {
//                 int num = word[j] - '0';
//                 number = number * 10 + num;
//             }
//             if(number % m == 0) {
//                 res.push_back(1);
//             } else {
//                 res.push_back(0);
//             }
//         }
//         return res;
//     }
// };