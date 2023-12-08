class Solution {
public:

    bool isSubsequence(string sub,string super){
        int i = 0;
        int j = 0;

        while(i < sub.size() && j < super.size()){
            if(sub[i] == super[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i == sub.size();
    }

    string findLongestWord(string s, vector<string>& dictionary) {
        string res = "";
        for(string &word : dictionary){
            if(word.size() > res.size() || (word.size() == res.size() && word < res)){
                if(isSubsequence(word,s)){
                    res = word;
                }
            }
        }
        return res;
    }
};