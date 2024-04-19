class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       int mindiff = INT_MAX;
        for(int i = 1; i < arr.size(); i++){
            mindiff = min(abs(arr[i - 1] - arr[i]),mindiff);
        }
       vector<vector<int>>res;
       for (int i = 1; i < arr.size(); i++) {
            if (abs(arr[i - 1] - arr[i]) == mindiff) {
                res.push_back({arr[i - 1], arr[i]});
            }
        }
       return res;
    }
};