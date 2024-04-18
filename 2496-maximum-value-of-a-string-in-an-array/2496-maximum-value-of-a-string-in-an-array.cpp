class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int res = 0;
        for(auto s : strs){
            int curr = 0;
            for(auto c : s){
                if(isalpha(c)){
                    curr = s.size();
                    break;
                }
                curr = curr * 10 + (c - '0');
            }
            res = max(res,curr);
        }
        return res;
    }
};