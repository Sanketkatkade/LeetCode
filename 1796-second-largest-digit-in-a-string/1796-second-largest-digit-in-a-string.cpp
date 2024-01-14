class Solution {
public:
    int secondHighest(string s) {
        int firstmax = -1;
        int secondmax = -1;
        for(auto ch : s){
            if(isdigit(ch)){
                int digit = ch - '0';
                if(digit > firstmax){
                    secondmax = firstmax;
                    firstmax = digit;
                }
                else if (digit < firstmax && digit > secondmax) {
                    secondmax = digit;
                }
            }
        
        }
        return secondmax;
    }
};