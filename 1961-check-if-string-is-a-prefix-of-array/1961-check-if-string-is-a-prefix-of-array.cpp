class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int count = 0;
        string sentence;
        for(int i = 0; i < words.size(); i++){
            sentence += words[i];
            if(sentence == s){
                return true;
            }
        }    
        return false;
    }
};