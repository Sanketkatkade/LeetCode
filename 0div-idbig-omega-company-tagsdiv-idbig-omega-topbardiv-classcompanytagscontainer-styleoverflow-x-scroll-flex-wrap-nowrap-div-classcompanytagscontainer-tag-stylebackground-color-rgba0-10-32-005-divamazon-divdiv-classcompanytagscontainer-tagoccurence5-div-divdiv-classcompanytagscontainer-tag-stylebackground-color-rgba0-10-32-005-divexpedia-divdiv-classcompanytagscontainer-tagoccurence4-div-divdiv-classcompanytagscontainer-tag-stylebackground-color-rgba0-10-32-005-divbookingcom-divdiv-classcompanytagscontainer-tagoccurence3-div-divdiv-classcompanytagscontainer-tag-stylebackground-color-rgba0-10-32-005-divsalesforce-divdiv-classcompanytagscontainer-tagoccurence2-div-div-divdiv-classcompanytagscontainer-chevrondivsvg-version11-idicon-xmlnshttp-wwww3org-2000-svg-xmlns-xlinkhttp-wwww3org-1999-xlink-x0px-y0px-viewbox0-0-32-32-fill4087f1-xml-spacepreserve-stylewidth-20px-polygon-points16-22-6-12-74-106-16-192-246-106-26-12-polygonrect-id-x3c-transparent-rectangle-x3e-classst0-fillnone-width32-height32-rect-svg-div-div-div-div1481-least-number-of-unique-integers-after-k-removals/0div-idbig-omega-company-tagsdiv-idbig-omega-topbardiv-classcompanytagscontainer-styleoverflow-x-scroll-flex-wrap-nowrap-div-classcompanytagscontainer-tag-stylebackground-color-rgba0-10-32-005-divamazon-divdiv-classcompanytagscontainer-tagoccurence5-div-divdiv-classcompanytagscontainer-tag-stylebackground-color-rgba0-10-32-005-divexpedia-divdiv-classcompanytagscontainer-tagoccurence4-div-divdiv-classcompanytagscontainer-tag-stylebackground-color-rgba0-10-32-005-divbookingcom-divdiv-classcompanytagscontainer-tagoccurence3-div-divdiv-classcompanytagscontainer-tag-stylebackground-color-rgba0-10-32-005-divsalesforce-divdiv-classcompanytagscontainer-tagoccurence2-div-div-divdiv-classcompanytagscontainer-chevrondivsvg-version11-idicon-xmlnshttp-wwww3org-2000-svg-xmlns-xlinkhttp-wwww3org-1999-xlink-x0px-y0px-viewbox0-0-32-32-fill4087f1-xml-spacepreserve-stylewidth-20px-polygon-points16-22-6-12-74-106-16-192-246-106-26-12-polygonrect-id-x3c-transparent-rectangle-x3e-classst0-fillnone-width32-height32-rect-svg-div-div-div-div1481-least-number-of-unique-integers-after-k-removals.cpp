class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(auto x : arr){
            mp[x]++;
        }
        vector<int> freq;
        for (const auto& it : mp) {
            freq.push_back(it.second);
        }

        sort(freq.begin(),freq.end());
        
        int uniqueCount = freq.size();

        for (int count : freq) {
            if (k >= count) {
                k -= count;
                uniqueCount--;
            } else {
                break;
            }
        }

        return uniqueCount;
    }
};