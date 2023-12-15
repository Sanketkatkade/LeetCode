class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(2,0);
        map<int,int>mp1;
        map<int,int>mp2;
        for(auto x : nums1){
            mp1[x]++;
        }

        for(auto y : nums2){
            mp2[y]++;
        }
       
        for(auto i : nums1){
            if(mp2[i] > 0){
                v[0]++;
            }
        }

        for(auto i : nums2){
            if(mp1[i] > 0){
                v[1]++;
            }
        }
        return v;
    }
};








// class Solution {
// public:
//     vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
//        vector<int>v;
//        int count = 0;
//        for(int i = 0; i < nums1.size(); i++){
//            for(int j = 0; j < nums2.size(); j++){
//                if(nums1[i] == nums2[j]){
//                    count++;
//                    break;
//                }
//            }
//        } 
//        v.push_back(count);

//        count = 0;
//        for(int i = 0; i < nums2.size(); i++){
//            for(int j = 0; j < nums1.size(); j++){
//                if(nums2[i] == nums1[j]){
//                    count++;
//                    break;
//                }
//            }
//        } 
//        v.push_back(count);
//        return v;
//     }
// };