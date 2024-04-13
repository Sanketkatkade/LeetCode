class Solution {
public:
    bool areNumbersAscending(string s) {
        istringstream ss(s);
        int prev = 0;
        string word;
        while(ss >>word){
            if(isdigit(word[0])){
                if(stoi(word) <= prev){
                    return false;
                }
                prev = stoi(word);
            }
        }
        return true;
    }
};