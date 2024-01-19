class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int numToRemove = arr.size() * 0.05;

        if(arr.size() >= 2 * numToRemove){
            arr.erase(arr.begin(),arr.begin() + numToRemove);
            arr.erase(arr.end() - numToRemove , arr.end());
        }

        double res = 0;
        for(int i = 0; i < arr.size(); i++){
            res += arr[i];
        }

        return res / arr.size();
    }
};