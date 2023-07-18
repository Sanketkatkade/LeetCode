class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        long long steps = 0;
        for(int i = 1; steps < n; i++){
            steps+=i;
            if(steps <= n){
                count++;
            }
        }
        return count;
    }
};