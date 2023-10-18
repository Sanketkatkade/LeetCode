// class Solution {
// public:
//     vector<int> sortByBits(vector<int>& arr) {
//         sort(arr.begin(),arr.end());
//          multimap<int,int>mp;
//         for(int i = 0; i < arr.size(); i++){
//            mp.insert({__builtin_popcount(arr[i]),arr[i]});
//         }
        
//         vector<int>ans;
//         for(auto it : mp){
//             ans.push_back(it.second);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         multimap<int,int>mp;
        for(int i = 0; i < arr.size(); i++){
            int count = 0;
            int num = arr[i];
            while(num > 0){
                count += (num & 1);
                num = num >> 1;
            }
            mp.insert(make_pair(count,arr[i]));
        }
        
        vector<int>ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};