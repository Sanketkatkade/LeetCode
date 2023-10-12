class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string,int>mp;
        for(int i = 0; i < words.size(); i++){
            string str;
            for(int j = 0; j < words[i].size(); j++){
                str += v[words[i][j] - 'a'];
            }
                mp[str] = 1;
        }
        return mp.size();
    }
};