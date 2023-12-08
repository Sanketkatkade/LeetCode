class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int result = 0; 
        for(const string& word : words){
            string temp = chars;
            bool valid = true;
            for(char c : word){
                size_t pos = temp.find(c);
                if(pos != string :: npos){
                    temp.erase(pos,1);
                }
                else{
                    valid = false;
                    break;
                }
            }
            if(valid){
                result += word.size();
            }
        }
        return result;
    }
};