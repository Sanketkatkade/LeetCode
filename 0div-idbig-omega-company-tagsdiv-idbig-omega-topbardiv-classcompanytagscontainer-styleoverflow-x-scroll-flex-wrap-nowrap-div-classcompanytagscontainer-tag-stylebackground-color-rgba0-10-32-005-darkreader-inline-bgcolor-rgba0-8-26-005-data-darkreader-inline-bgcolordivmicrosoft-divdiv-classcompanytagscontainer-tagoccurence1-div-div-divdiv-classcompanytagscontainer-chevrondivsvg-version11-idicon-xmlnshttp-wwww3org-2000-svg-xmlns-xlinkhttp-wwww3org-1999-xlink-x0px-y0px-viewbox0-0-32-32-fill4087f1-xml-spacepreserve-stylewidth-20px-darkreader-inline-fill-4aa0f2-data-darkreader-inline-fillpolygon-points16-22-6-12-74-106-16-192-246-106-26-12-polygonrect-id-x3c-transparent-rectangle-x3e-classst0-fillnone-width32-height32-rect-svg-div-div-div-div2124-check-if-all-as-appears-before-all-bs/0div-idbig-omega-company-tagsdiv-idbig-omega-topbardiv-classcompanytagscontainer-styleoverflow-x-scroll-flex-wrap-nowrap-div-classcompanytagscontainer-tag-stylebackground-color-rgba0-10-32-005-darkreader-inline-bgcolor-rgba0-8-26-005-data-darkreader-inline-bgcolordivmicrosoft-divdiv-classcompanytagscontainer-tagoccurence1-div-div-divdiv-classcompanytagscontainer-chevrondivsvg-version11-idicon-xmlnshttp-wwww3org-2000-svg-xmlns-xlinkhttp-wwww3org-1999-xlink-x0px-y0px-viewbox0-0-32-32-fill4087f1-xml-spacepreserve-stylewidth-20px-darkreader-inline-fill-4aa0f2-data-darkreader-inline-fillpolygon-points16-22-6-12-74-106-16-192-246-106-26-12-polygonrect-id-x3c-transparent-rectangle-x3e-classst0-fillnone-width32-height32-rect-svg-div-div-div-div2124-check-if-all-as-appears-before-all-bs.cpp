class Solution {
public:
    bool checkString(string s) {
        bool flag = true;
        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == 'b' && s[i+1] == 'a'){
                flag = false;
                return flag; 
            }
        }
        return true;
    }
};