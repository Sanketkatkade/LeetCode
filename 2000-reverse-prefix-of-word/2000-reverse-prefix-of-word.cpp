class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count = 0;
        for( int i = 0; i < word.size(); i++){
            count++;
            if(word[i]==ch){
                break;                                        
            }
            if(count == word.size())
                return word;
        }
        for (int j=0; j<count/2; j++) {
            swap(word[j], word[count-j-1]);
        }
        return word;
    }
};