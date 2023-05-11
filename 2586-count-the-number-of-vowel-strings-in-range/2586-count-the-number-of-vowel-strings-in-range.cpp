class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(int i = left; i <= right; i++){
            int lastCharIndex=words[i].size();
            if(words[i][0]== 'a' || words[i][0]== 'e' || words[i][0]== 'i' || words[i][0]== 'o' || words[i][0]== 'u' ){
                if(words[i][lastCharIndex-1] == 'a'|| words[i][lastCharIndex-1] == 'e'|| words[i][lastCharIndex-1] == 'i'|| words[i][lastCharIndex-1] == 'o'|| words[i][lastCharIndex-1] == 'u'){
                    count++;
                }
            
            }
        }
        return count;
    }
};