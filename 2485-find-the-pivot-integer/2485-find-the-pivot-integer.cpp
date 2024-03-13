class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = 0;
        for(int i = 1; i <= n; i++){
            totalSum += i;
        }

        int presentSum = 0;
        for(int i = 1; i <= n; i++){
            presentSum += i;
            if((totalSum - presentSum + i )== presentSum){
                return i;
            }
        }
        return -1;
    }
};