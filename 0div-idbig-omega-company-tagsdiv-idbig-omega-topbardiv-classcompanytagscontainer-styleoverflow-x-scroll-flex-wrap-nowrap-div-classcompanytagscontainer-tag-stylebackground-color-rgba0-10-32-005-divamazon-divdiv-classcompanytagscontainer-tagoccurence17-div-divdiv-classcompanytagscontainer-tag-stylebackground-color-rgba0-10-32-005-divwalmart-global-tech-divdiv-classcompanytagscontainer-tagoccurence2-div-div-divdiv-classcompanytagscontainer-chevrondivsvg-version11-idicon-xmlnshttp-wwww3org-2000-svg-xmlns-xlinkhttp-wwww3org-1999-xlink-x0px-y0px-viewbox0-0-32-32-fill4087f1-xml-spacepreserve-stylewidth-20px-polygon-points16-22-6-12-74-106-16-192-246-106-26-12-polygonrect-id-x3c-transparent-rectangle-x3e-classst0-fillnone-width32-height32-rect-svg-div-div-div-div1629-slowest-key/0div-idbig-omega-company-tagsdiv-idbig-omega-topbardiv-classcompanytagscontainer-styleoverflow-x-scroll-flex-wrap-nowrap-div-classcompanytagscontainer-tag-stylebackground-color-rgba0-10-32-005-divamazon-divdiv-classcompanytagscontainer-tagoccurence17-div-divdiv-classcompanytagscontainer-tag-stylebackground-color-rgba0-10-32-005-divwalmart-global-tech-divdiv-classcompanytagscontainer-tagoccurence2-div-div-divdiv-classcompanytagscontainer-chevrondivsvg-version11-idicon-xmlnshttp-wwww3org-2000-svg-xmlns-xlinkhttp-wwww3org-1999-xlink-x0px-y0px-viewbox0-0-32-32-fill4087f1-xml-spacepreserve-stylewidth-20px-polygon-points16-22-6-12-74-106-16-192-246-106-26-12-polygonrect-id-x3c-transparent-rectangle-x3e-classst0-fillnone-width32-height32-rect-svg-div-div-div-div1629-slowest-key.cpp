class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int maxi = releaseTimes[0];
        char key = keysPressed[0];

        for (int i = 1; i < releaseTimes.size(); i++) {
            int duration = releaseTimes[i] - releaseTimes[i - 1];

            if (duration > maxi || (duration == maxi && keysPressed[i] > key)) {
                maxi = duration;
                key = keysPressed[i];
            }
        }

        return key;
    }
};
