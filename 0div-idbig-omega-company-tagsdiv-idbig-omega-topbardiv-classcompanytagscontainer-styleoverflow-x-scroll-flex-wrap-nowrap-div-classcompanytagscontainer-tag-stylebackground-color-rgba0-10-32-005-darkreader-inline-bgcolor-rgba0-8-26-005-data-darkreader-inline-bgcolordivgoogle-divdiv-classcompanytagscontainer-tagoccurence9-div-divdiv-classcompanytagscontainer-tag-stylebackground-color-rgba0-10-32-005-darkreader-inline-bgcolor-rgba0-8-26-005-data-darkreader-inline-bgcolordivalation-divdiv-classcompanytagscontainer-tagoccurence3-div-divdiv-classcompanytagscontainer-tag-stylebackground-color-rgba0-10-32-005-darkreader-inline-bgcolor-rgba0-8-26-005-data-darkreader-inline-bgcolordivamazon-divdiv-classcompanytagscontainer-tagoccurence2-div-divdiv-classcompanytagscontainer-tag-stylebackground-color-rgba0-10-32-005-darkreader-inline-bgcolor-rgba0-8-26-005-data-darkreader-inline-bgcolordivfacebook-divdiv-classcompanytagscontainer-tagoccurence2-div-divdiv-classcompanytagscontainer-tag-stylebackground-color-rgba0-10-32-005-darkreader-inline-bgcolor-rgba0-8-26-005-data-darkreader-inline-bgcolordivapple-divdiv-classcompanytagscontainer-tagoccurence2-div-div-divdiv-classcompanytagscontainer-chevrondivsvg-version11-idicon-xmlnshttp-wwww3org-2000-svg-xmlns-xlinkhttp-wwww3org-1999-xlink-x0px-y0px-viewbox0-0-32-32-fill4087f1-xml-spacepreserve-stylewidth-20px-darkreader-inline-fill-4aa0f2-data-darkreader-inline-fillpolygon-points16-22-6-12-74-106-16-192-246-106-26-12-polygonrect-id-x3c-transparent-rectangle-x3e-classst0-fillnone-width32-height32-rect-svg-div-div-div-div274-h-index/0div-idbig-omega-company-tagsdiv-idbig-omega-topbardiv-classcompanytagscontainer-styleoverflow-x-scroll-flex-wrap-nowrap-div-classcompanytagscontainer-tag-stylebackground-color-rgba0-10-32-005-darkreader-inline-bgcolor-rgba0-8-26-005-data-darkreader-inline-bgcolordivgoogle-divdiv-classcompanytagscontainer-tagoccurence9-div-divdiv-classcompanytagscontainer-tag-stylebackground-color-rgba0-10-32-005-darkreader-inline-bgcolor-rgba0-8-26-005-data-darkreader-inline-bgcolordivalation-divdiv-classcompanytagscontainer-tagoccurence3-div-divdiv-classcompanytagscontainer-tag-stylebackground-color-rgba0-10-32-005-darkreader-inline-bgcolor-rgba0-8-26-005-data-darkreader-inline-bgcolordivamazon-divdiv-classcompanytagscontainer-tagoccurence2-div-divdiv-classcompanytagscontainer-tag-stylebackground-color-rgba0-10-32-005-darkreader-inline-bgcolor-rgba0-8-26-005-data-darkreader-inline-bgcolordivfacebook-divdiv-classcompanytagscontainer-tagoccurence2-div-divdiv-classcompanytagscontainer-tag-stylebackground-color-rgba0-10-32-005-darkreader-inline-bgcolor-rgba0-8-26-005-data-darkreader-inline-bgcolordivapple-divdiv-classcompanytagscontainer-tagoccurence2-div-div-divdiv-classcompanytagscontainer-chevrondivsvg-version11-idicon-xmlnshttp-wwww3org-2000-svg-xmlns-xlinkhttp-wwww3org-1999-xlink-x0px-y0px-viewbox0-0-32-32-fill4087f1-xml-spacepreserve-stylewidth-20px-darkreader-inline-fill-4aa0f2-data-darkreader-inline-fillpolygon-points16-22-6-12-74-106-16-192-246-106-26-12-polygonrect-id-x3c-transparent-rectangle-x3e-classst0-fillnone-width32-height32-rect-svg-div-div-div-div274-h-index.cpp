class Solution {
public:
    int hIndex(vector<int>& citations) {
        int count = 0;
        sort(citations.begin(),citations.end());
        for(int i = citations.size()-1; i >= 0; i--){
            if(citations[i] >= citations.size()-i){
                count++;
            }
        }
        return count;
    }
};