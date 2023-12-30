class Solution {
public:
    long long countVowels(const string& word) {
        long long int ans = 0, k = 0;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
                k += (i + 1);
                ans += k;
            } 
            else {
                ans += k;
            }
        }
        return ans;
    }
};




// TLE

// class Solution {
// public:
//     bool isVowel(char c) {
//         return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//     }

//     int countVowel(const string& str) {
//         int vowelCount = 0;
//         for (char c : str) {
//             if (isVowel(c)) {
//                 vowelCount++;
//             }
//         }
//         return vowelCount;
//     }

//     long long countVowels(const string& word) {
//         long long sum = 0;
//         int n = word.size();

//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 string substring = word.substr(i, j - i + 1);
//                 int vowelCount = countVowel(substring);
//                 sum += vowelCount;
//             }
//         }
//         return sum;
//     }
// };
