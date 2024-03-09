class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>set1(nums1.begin(),nums1.end());
        set<int>set2(nums2.begin(),nums2.end());
        set<int>res;
        
        for(const auto& element : set1){
            if(set2.find(element) != set2.end()){
                res.insert(element);
            }
        }
        vector<int>ans;
        for(const auto& ele : res){
            ans.push_back(ele);
        }
        return ans;
    }
};