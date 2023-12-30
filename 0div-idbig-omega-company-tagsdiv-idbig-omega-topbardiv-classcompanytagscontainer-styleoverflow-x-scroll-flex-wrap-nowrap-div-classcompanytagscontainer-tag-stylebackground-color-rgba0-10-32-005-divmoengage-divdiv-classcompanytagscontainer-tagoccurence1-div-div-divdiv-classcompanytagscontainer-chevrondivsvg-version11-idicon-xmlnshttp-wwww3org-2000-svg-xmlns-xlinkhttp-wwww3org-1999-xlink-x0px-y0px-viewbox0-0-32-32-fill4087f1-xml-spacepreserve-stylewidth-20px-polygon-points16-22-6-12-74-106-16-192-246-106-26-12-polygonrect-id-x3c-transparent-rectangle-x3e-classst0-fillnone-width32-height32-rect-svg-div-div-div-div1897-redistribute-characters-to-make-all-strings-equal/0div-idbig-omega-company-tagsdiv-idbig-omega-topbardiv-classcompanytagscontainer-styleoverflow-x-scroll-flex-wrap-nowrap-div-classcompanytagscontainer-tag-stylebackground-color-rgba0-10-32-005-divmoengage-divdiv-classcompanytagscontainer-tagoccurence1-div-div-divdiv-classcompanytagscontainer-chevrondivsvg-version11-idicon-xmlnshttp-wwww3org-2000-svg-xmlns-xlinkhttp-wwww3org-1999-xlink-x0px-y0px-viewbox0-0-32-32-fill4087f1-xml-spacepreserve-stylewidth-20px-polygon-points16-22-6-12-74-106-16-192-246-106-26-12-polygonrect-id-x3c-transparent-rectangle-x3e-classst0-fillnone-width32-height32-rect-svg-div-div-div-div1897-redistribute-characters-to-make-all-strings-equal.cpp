class Solution {
public:
    bool makeEqual(vector<string>& words) {
       unordered_map<char,int>mp;
        if(words.size() <= 1){
            return true;
        }
       for(int i = 0; i < words.size(); i++){
           string word = words[i];
           for(auto x : word){
               mp[x]++;
           }
       } 

       for(const auto& it : mp){
            if (it.second % words.size() != 0) {
                return false;
            }
       }
       return true;
    }
};