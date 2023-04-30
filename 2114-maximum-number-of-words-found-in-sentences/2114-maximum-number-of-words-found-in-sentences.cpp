class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        for (int i = 0; i < sentences.size(); i++) {
            string word = sentences[i];
            int word_count = 1;
            for (int j = 0; j < word.length(); j++) {
                if (word[j] == ' ' && word[j+1] != ' ') {
                    word_count++;
                }
            }
            count = max(count, word_count);
        }
        return count;
    }
};
