class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        map<int,int>m;
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        set<int>s3(nums3.begin(),nums3.end());
        for(int i : s1){
            m[i]++;
        }
        for(int i : s2){
            m[i]++;
        }
        for(int i : s3){
            m[i]++;
        }

        for(auto it : m){
            if(it.second >= 2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};