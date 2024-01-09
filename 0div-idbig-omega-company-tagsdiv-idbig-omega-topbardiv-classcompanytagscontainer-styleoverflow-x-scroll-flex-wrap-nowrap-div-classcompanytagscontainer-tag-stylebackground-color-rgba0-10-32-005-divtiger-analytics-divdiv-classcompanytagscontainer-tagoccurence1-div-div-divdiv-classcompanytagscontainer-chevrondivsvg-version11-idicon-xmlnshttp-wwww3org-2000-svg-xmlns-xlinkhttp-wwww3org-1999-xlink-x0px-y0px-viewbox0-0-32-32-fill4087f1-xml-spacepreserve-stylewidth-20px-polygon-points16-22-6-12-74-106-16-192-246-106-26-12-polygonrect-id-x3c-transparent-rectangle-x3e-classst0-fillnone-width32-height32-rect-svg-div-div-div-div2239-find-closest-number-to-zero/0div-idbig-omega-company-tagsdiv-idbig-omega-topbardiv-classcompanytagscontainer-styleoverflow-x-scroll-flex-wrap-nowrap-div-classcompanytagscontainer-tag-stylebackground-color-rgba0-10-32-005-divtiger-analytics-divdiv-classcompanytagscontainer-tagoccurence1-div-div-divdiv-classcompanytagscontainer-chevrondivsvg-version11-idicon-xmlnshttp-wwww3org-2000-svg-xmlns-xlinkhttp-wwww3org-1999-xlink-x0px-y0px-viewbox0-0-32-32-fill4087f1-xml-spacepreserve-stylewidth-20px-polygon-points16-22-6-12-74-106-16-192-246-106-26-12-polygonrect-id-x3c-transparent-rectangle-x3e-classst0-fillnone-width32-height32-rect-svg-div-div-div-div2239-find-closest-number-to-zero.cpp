class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        vector<int> pos, neg;

        for (auto x : nums) {
            if (x > 0) {
                pos.push_back(x);
            } else if (x < 0) {
                neg.push_back(x);
            } else if (x == 0) {
                return 0;
            }
        }

        if (!pos.empty()) {
            sort(pos.begin(), pos.end());
        }

        if (!neg.empty()) {
            sort(neg.begin(), neg.end());
        }

        if (pos.empty()) {
            return neg.back();
        }

        if (neg.empty()) {
            return pos.front();
        }

        if (abs(neg.back()) < pos.front()) {
            return neg.back();
        }

        return pos.front();
    }
};