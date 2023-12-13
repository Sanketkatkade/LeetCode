class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char, int> licensePlateFreq;
        
        for (char x : licensePlate) {
            if (isalpha(x)) {
                x = tolower(x);
                licensePlateFreq[x]++;
            }
        }

        string shortestWord;
        int minLength = INT_MAX;

        for (const string& word : words) {
            unordered_map<char, int> wordFreq;

            for (char x : word) {
                wordFreq[x]++;
            }

            bool isComplete = true;
            
            for (auto const& it : licensePlateFreq) {
                if (licensePlateFreq[it.first] > wordFreq[it.first]) {
                    isComplete = false;
                    break;
                }
            }

            if (isComplete && word.length() < minLength) {
                shortestWord = word;
                minLength = word.length();
            }
        }

        return shortestWord;
    }
};

