class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int sum1 = 0;
        int sum2 = 0;
        int res = 0;
        for(int i = 0; i < firstWord.size(); i++){
            sum1 = sum1 * 10 + (firstWord[i] - 'a');
        }

        for(int i = 0; i < secondWord.size(); i++){
            sum2 = sum2 * 10 + (secondWord[i] - 'a');
        }

        for(int i = 0; i < targetWord.size(); i++){
            res = res * 10 + (targetWord[i] - 'a');
        }

        return sum1 + sum2 == res;
    }
};