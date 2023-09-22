class Solution {
public:
    string reverseWords(string str) {
        stringstream ss(str);
        string word;
        string res = "";

        while(ss >> word){
            res = word + " " + res;
        }
        res.pop_back();
        return res;
    }
};