class Solution {
public:

    bool checkPalindrome(string str){
        int start = 0;
        int end = str.size() - 1;
        while(start <= end){
            if(str[start] != str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++){
            if(checkPalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};

// class Solution {
// public:
//     string firstPalindrome(vector<string>& words) {
//         for (int i = 0; i < words.size(); i++){
//             string res = words[i];
//             for(int j = 0; j <= words[i].length() / 2; j++){
//                 int start = j;
//                 int end = words[i].length()-1-j;
//                 while(start <= end){
//                     swap(res[start],res[end]);
//                     start++;
//                     end--;
//                 }
//             }
//             if (res == string(res.rbegin(), res.rend())) {
//                 return res;
//             }
//         }
//         return "";
//     }
// };

