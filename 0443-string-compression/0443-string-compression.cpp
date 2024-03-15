class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        if(chars.size() == 1){
            return chars.size();
        }
        int count = 1;
         for(int i = 0; i < chars.size(); i++){
            if (i == chars.size() - 1 || chars[i] != chars[i + 1]) {
                res += chars[i];
                if (count > 1) {
                    res += to_string(count);
                    count = 1;
                }
            } else {
                count++;
            }
        }
        for(int i = 0; i < res.size(); i++){
            chars[i] = res[i];
        }
        return res.size();
    }
};