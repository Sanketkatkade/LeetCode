class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        int lower = 0;
        for(auto i : word){
            if(isupper(i)){
                upper++;
            }
            else{
                lower++;
            }
        }
        if(upper == word.length() || lower == word.length()){
            return true;
        }
        if(isupper(word[0]) && upper == 1){
            return true;
        }
        return false;
    }
};