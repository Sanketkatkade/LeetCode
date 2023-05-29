class Solution {
public:
    int passThePillow(int n, int time) {
        int passesInOneCycle = 2 * (n - 1);
        int remainingPasses = time % passesInOneCycle;

        int position;
        if (remainingPasses <= n - 1) {
            position = remainingPasses + 1;
        } else {
            position = (passesInOneCycle - remainingPasses) + 1;
        }

        return position;
    }
};
