class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        vector<pair<long,int>>v;
        for(int i = 0; i < nums.size(); i++){
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end());
        for(int i = 0; i < nums.size(); i++){
            int j = i+1;
            while(j < nums.size() && v[j].first - v[i].first <= valueDiff){
                if(abs(v[j].second - v[i].second) <= indexDiff){
                    return true;
                }
                j++;
            }
        }
        return false;
    }
};