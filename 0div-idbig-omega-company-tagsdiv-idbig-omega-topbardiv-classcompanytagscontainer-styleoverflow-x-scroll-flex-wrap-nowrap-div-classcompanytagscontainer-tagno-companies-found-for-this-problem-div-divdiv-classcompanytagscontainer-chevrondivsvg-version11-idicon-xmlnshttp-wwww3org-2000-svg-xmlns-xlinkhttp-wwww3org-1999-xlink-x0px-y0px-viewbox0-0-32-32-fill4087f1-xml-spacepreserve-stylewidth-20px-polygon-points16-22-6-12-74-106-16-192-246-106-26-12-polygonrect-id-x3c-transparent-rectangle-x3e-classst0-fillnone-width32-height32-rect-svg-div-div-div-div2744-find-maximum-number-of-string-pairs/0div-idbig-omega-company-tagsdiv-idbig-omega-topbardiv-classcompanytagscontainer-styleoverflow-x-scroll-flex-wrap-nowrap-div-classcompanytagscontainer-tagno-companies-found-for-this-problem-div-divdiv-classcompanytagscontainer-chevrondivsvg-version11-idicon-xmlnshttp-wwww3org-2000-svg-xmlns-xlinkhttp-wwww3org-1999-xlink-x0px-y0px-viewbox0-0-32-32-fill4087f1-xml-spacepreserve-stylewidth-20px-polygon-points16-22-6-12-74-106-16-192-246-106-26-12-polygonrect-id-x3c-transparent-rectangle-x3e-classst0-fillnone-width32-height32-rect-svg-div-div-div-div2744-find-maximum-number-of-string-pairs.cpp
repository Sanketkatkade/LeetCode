class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        for(int i = 0; i < words.size(); i++){
            sort(words[i].begin(),words[i].end());
        }
        
        sort(words.begin(),words.end());
        int count = 0;
        for(int i = 0; i < words.size()-1; i++){
            if(words[i] == words[i+1]){
                count++;
            }
        }
        return count;
    }
};