class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x : arr){
            mp[x]++;
        }
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != 0 &&  mp[arr[i] * 2] > 0){
                return true;
            }
            else if(arr[i] == 0 && mp[arr[i]] > 1){
                return true;
            } 
        }        
        return false;
    }
};