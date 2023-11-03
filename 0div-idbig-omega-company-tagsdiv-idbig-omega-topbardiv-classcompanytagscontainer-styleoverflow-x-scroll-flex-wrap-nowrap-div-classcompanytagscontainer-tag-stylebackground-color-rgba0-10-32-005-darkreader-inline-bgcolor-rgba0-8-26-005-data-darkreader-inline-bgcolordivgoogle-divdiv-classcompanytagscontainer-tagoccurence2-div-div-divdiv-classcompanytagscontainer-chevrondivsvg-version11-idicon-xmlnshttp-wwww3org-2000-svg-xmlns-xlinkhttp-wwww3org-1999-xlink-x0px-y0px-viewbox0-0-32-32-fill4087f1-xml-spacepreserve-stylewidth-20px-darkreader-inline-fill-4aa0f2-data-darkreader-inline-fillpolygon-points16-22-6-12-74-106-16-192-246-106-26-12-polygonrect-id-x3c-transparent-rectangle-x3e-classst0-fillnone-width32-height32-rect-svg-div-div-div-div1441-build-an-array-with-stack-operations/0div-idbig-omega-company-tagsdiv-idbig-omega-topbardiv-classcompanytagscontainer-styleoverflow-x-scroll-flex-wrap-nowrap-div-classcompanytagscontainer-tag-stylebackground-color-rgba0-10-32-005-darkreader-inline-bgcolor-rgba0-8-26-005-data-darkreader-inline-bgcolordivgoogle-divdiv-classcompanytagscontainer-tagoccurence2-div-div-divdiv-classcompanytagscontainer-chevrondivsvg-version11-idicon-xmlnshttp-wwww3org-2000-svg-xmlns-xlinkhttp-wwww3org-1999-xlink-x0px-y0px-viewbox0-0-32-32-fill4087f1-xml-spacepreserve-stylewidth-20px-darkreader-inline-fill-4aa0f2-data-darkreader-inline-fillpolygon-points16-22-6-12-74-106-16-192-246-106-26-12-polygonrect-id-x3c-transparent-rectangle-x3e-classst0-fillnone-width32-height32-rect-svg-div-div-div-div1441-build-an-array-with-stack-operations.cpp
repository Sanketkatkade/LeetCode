class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> str;
        int targetIndex = 0;
        int currentNumber = 1;
        
        while (targetIndex < target.size()) {
            if (target[targetIndex] == currentNumber) {
                str.push_back("Push");
                targetIndex++;
            } 
            else {
                str.push_back("Push");
                str.push_back("Pop");
            }
            currentNumber++;
        }
        
        return str;
    }
};
