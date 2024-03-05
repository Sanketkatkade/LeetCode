class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j){
            if(s[i] == s[j]){
                char ch = s[i];
                while(i < s.size() && s[i] == ch){
                    i++;
                }
                while(j >= 0 && s[j] == ch){
                    j--;
                }
            }
            else{
                break;
            }
        }
        if(j - i + 1 < 0){
            return 0;
        }
        return j - i + 1;
    }
};