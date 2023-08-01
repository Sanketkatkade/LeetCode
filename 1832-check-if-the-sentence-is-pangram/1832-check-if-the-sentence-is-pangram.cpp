class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>m;
        for(char ch : sentence){
             m[ch]++;
        }
        for(char letter = 'a'; letter <= 'z'; letter++){
            if(m[letter] == 0){
                return false;
            }
        }
        return true;
    }
};