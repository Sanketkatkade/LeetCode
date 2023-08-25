class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        int prev = 0;
        for(int i = n -1; i >= 0; i--){
            int shift = (shifts[i] + prev) % 26;
            s[i] = (s[i] - 'a' + shift) % 26 +'a';
            prev = shift;
        }
        return s;
    }
};