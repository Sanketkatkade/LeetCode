class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i = 0; i < l.size(); i++){
            vector<int>v;
            for(int j = l[i]; j <= r[i]; j++){
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            bool flag = true;
            for(int k = 2; k < v.size(); k++){
                if(v[k] - v[k - 1] != v[1] - v[0]){
                    flag = false;
                    break;
                }
            }
                ans.push_back(flag);
        }
        return ans;
    }
};