class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1; 
        int currSum = 0;
        for(int i = 0; i < s.size(); i++){
            currSum += widths[s[i] -'a'];
            if(currSum > 100){
                currSum = widths[s[i] - 'a'];
                lines++;
            }
        }
        return {lines,currSum};
    }
};