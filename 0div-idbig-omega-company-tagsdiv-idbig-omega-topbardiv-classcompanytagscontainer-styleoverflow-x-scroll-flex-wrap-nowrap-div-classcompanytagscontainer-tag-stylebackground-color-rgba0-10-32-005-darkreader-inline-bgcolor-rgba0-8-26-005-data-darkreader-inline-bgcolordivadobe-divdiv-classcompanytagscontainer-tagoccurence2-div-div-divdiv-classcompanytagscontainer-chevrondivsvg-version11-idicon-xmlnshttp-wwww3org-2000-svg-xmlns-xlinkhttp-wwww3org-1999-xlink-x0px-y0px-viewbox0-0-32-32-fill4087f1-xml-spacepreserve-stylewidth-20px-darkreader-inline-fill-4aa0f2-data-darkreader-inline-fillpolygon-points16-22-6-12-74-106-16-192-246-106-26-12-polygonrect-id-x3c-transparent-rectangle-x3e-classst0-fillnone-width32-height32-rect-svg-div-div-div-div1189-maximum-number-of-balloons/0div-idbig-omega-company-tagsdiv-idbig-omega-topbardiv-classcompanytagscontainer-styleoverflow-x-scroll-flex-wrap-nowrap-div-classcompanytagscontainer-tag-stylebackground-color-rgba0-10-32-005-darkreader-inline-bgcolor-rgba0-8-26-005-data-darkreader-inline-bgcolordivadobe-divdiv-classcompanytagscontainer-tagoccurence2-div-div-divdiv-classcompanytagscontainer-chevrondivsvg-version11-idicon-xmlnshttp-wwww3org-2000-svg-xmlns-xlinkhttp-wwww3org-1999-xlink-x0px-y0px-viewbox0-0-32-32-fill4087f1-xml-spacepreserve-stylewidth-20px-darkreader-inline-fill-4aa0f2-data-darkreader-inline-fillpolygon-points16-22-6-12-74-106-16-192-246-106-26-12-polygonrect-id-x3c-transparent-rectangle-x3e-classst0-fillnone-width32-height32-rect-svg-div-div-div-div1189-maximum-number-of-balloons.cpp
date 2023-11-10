class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<int,int>mp;
        for(char c : text){
            mp[c]++;
        }
        
        int result = INT_MAX;
        result = min(result,mp['b']);
        result = min(result,mp['a']);
        result = min(result,mp['l']/2);
        result = min(result,mp['o']/2);
        result = min(result,mp['n']);

        return result;
    }
};