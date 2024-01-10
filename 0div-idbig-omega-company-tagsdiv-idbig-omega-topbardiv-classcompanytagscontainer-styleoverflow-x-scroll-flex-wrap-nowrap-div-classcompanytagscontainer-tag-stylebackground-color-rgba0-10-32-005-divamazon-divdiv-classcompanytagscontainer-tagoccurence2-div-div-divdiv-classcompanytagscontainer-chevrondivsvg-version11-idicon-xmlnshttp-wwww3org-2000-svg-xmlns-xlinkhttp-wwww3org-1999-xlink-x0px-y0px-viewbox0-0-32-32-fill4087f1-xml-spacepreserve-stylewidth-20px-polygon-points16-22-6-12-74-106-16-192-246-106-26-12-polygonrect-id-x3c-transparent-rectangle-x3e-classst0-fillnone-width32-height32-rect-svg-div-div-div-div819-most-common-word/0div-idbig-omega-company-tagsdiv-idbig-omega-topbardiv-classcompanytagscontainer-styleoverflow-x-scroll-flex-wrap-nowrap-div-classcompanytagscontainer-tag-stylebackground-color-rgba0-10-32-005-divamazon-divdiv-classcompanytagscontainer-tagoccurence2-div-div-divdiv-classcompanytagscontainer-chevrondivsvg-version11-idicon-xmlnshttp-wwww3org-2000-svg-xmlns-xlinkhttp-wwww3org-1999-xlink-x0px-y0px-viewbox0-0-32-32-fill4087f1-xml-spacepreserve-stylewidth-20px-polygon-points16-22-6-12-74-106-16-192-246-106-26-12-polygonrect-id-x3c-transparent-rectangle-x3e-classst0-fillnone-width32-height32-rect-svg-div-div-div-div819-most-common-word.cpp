class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string, int> wordCount;
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
        replace_if(paragraph.begin(), paragraph.end(), ::ispunct, ' ');


        istringstream iss(paragraph);
        string word;
       
        while (iss >> word) {
            word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());

            if (find(banned.begin(), banned.end(), word) == banned.end()) {
                wordCount[word]++;
            }
        }

        int count = INT_MIN;
        string res;

        for (const auto& it : wordCount) {
            if (count < it.second) {
                res = it.first;
                count = it.second;
            }
        }

        return res;
    }
};