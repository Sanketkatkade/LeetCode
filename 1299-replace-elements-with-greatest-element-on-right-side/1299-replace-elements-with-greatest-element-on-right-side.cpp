class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size() == 1){
            return {-1};
        }        
        int max_val = -1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = max_val;
            max_val = max(max_val, temp);
        }
        return arr;
    }
};