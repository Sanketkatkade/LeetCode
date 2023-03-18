class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        for(auto x : s) cout<<x<<" ";
        vector<int>v(s.begin(),s.end());
        nums=v;
        return s.size();
    }
};