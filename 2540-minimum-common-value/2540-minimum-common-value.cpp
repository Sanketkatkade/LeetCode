class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       set<int>set1(nums1.begin(),nums1.end());
       set<int>set2(nums2.begin(),nums2.end());

       for(auto const& element : set1){
           if(set2.find(element) != set2.end()){
               return element;
           }
       }
        return -1;
    }
};