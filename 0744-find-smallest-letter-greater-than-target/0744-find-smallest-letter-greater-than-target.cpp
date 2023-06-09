class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char result = '\0';
        for(int i = 0; i < letters.size(); i++){
            if(letters[i] > target){
                result = letters[i];
                break;
            }
        }
         if (result == '\0' && letters.size() != 0) {
            result = letters[0];
        }
        return result;
    }
};


