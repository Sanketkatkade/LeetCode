class Solution {
public:
    bool checkZeroOnes(string s) {
        int count_one = 0;
        int max_one = 0;
        int count_zero = 0;
        int max_zero = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                count_one++;
                max_one = max(max_one, count_one);
                count_zero = 0;
            }
            else if(s[i] == '0'){
                count_zero++;
                max_zero = max(max_zero, count_zero);
                count_one = 0;
            }
        }
        
        return max_one > max_zero;
    }
};
