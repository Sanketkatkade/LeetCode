class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i = 1; i < words.size(); i++){
            string x = words[i];
            sort(x.begin(),x.end());
            string y = words[i-1];
            sort(y.begin(),y.end());
            if(x == y){
                words.erase(words.begin() + i);
                i--;
            }
        }
        return words;
    }
};



// class Solution {
// public:

//     bool CheckAnagram(string str1, string str2){
//         if(str1.length() != str2.length()){
//             return false;
//         }
//         unordered_map<int,int> freq1, freq2;

//         for(auto x : str1){
//             freq1[x]++;
//         }

//         for(auto x : str2){
//             freq2[x]++;
//         }

//         return freq1 == freq2;
//     }

//     vector<string> removeAnagrams(vector<string>& words) {
//         vector<string> ans;
//         for(int i = 0; i < words.size(); i++){
//             bool isAnagram = false;
//             for(int j = 0; j < ans.size(); j++){
//                 if(CheckAnagram(words[i], ans[j])){
//                     isAnagram = true;
//                     break;
//                 }
//             }
//             if(!isAnagram){
//                 ans.push_back(words[i]);
//             }
//         }
//         return ans;
//     }
// };


// Input
// words =
// ["a","b","a"]
// Output
// ["a","b"]
// Expected
// ["a","b","a"]