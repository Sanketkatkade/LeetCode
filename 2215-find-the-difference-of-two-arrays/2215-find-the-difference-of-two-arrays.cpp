class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v1;
        vector<int> v2;
        for(int i = 0; i < nums1.size(); i++){
            bool found = false;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                v1.push_back(nums1[i]);
            }
        }
        for(int i = 0; i < nums2.size(); i++){
            bool found = false;
            for(int j = 0; j < nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                v2.push_back(nums2[i]);
            }
        }
        sort(v1.begin(), v1.end());
        v1.erase(unique(v1.begin(), v1.end()), v1.end());
        sort(v2.begin(), v2.end());
        v2.erase(unique(v2.begin(), v2.end()), v2.end());
        return {v1, v2};
    }
};
