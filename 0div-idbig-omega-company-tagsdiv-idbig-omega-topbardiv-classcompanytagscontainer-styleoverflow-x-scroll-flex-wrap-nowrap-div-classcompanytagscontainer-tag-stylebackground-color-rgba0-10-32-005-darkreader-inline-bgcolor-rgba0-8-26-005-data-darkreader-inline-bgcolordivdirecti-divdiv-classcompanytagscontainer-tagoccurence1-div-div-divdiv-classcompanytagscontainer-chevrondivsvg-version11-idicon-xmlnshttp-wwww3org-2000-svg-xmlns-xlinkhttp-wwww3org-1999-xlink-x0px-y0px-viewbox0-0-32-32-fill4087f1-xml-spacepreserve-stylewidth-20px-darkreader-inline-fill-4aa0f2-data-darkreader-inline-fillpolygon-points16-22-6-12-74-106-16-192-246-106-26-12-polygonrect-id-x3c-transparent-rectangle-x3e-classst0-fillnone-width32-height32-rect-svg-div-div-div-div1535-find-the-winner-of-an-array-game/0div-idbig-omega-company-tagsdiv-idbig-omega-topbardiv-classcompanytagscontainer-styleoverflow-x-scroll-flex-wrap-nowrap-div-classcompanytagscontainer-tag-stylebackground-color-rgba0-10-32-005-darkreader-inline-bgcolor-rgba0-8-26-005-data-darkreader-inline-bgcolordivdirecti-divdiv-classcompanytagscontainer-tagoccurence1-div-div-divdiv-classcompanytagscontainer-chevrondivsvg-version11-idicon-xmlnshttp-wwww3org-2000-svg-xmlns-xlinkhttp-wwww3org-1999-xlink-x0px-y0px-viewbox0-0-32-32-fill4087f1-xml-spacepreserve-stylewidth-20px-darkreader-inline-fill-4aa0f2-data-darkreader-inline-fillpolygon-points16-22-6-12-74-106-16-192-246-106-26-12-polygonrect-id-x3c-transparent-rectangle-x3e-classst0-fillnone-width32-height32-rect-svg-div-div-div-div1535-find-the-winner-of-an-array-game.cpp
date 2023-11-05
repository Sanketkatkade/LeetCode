class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k == 1){
            return max(arr[0],arr[1]);
        }
        if(k >= arr.size()){
            return *max_element(arr.begin(),arr.end());
        }

        int currentWinner = arr[0];
        int count = 0;
        for(int i = 1; i < arr.size(); i++){
            if(currentWinner > arr[i]){
                count++;
            }
            else{
                currentWinner = arr[i];
                count = 1;
            }
            if(count == k){
                return currentWinner;
            }
        }
        return currentWinner;
    }
};