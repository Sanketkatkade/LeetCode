class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(auto ch : magazine){
            mp[ch]++;
        }

        for(char c : ransomNote){
            if(mp.find(c) == mp.end() || mp[c] == 0){
                return false;
            }
            mp[c]--;
        }
        return true;
    }
};