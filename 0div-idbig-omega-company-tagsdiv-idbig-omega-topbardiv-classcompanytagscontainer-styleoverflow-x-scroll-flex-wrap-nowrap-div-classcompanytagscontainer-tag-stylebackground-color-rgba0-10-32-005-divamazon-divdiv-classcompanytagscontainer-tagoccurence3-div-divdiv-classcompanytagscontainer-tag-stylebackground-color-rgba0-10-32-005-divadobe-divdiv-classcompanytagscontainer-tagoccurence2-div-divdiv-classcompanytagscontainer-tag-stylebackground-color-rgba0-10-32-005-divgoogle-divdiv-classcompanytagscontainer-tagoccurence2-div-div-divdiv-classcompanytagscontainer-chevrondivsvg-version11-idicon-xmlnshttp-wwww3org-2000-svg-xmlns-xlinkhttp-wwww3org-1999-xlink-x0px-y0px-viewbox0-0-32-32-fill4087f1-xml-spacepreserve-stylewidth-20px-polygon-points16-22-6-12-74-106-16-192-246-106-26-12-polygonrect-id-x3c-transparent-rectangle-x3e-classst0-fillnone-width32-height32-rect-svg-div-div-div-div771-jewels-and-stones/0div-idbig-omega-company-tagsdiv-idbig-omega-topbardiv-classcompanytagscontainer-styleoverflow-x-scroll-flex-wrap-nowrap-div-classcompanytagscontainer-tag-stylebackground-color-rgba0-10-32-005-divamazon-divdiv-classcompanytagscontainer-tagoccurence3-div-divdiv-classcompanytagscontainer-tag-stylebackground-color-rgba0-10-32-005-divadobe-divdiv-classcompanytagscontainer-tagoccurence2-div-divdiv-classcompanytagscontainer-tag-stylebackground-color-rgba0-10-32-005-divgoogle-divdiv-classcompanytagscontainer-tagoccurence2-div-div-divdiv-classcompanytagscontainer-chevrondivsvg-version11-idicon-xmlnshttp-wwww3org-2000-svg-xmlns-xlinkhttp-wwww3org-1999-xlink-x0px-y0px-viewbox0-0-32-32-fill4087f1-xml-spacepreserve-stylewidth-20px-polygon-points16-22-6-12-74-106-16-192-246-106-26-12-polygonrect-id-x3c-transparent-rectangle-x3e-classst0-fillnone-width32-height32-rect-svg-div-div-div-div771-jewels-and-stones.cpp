class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        for(auto x : stones){
            mp[x]++;
        }
        int ans = 0;
        for(auto x : jewels){
            ans += mp[x];
        }
        return ans;
    }
};