class Solution {
public:
    int mostFrequentEven(std::vector<int>& nums) {
        std::map<int, int> mp;
        
        for (int num : nums) {
            if (num % 2 == 0) {
                mp[num]++;
            }            
        }
        
        int ans = -1;
        int maxFreq = 0;
        
        for (auto& res : mp) {
            if (res.second > maxFreq) {
                maxFreq = res.second;
                ans = res.first;
            }
        }
        
        return ans;
    }
};