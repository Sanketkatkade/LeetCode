class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heights1 = heights;
        sort(heights1.begin(),heights1.end());
        int count = 0;
        for(int i = 0; i < heights.size(); i++)
            if(heights[i] != heights1[i]){
                count++;
            }
        return count;
    }
};