class Solution {
public:
    int largestInteger(int num) {
        string numStr = to_string(num);
        int n = numStr.size();
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((numStr[i] % 2 == 0 && numStr[j] % 2 == 0) || (numStr[i] % 2 != 0 && numStr[j] % 2 != 0)) {
                    if (numStr[i] < numStr[j]) {
                        swap(numStr[i], numStr[j]);
                    }
                }
            }
        }
        
        return stoi(numStr); 
    }
};
