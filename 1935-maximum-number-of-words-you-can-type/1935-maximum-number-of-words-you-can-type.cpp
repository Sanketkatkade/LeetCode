class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        istringstream iss(text);
        string word;
        while(iss >> word){
            bool flag = true;
            for(char c : word){
                if(brokenLetters.find(c) != string :: npos){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};