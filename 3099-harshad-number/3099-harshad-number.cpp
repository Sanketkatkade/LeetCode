class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num = 0;
        int y = x;
        while(y != 0){
            num += y % 10;
            y /= 10;
        }
        if(x % num == 0){
            return num;
        }
        return -1;
    }
};