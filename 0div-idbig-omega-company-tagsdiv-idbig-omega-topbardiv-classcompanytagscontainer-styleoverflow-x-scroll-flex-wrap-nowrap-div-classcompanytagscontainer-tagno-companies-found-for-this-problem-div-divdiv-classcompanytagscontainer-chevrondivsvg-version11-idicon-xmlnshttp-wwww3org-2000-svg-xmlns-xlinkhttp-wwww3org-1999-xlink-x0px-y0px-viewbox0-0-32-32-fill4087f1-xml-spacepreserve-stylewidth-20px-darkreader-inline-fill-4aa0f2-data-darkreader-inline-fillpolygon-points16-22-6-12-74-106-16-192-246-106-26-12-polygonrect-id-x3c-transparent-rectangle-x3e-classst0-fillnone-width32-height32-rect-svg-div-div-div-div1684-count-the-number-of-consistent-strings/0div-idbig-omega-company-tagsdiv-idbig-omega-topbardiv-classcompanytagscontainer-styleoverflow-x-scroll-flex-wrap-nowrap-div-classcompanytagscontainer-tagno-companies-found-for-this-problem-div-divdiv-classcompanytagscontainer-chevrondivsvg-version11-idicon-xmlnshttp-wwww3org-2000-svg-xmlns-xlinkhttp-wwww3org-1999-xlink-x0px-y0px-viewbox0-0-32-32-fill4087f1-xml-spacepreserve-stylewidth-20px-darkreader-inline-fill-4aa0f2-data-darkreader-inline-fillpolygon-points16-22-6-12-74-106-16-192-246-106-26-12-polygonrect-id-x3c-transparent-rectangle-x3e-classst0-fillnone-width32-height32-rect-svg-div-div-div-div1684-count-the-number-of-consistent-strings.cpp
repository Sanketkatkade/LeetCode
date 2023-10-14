class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int mp[26] = {0};
        int ans = 0;
        for(auto& x : allowed){
            mp[x - 'a']++;
        }

        for(auto w : words){
            bool flag = true;
            for(auto ch : w){
                if(mp[ch - 'a'] == 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans++;
            }
        }
        return ans;        
    }
};