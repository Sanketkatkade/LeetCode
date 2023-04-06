class Solution {
public:
    bool isPerfectSquare(int num) {
        int sqrtnum = sqrt(num);
        if(sqrtnum * sqrtnum == num){
            return true;
        }
        
        return false;
    }
};