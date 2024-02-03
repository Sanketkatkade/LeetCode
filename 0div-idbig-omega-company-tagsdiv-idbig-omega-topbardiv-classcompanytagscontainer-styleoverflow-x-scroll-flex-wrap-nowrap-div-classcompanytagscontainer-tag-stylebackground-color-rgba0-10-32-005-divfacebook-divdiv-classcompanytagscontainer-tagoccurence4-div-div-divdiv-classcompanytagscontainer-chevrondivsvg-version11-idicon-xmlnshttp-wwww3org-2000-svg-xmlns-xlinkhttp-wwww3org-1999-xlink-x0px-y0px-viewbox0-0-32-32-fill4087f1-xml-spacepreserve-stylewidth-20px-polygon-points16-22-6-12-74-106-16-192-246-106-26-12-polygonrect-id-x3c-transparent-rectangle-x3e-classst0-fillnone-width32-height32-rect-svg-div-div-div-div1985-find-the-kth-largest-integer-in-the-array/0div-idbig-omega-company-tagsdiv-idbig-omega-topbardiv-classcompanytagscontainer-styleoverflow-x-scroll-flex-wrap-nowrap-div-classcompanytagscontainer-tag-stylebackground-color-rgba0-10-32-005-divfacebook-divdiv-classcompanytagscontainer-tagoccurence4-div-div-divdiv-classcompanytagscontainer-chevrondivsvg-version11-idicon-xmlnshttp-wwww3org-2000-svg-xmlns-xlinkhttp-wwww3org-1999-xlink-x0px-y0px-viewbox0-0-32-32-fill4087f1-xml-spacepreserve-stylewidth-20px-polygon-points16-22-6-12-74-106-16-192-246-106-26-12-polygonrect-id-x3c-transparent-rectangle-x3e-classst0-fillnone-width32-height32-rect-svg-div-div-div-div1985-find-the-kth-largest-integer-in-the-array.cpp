class Solution {
public:

    bool static comp(string s1, string s2){
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 == n2){
            return s1 > s2;
        }
        return n1 > n2;
    }

    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(),comp); 
        for(int i = 0; i < nums.size(); i++){
            if(i == k-1){
                return nums[i];
            }
        }
        return "-1";
    }
};