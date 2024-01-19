class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(auto x : arr1){
            mp[x]++;
        }

        vector<int>res;

        for(auto x : arr2){
            int count = mp[x];
            while(count > 0){
                res.push_back(x);
                count--;
            }
            mp.erase(x);
        }
        vector<int>res2;
        for(auto x : mp){
            int num = x.first;
            int count = x.second;
            while(count > 0){
                res2.push_back(num);
                count--;
            }
        }
        sort(res2.begin(),res2.end());
        res.insert(res.end(),res2.begin(),res2.end());
        return res;
    }
};
















// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         vector<int>res1;
//         vector<int>res2;
//         for(int i = 0; i < arr2.size(); i++){
//             for(int j = 0; j < arr1.size(); j++){
//                 if(arr2[i] == arr1[j]){
//                     res1.push_back(arr1[j]);
//                 }
//             }
//         }
//         for(int i = 0; i < arr1.size(); i++){
//             bool flag = true;
//             for(int j = 0; j < arr2.size(); j++){
//                 if(arr1[i] == arr2[j]){
//                     flag = false;
//                     break;
//                 }
//             }
//             if(flag){
//                 res2.push_back(arr1[i]);
//             }
//         }
//         for(int i = 0; i < res2.size(); i++){
//             res1.push_back(res2[i]);
//         }
//         return res1;
//     }
// };