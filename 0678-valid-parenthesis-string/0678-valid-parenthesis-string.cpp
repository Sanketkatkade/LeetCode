class Solution {
public:
    bool checkValidString(string s) {
        int count = 0;
        for(char x : s){
            if(x == '(' || x == '*'){
                count++;
            }
            else{
                count--;
            }
            if(count < 0){
                return false;
            }
        }
        count = 0;

        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == ')' || s[i] == '*'){
                count++;
            }
            else{
                count--;
            }
            if(count < 0){
                return false;
            }
        }
        return true;
    }
};