class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        reverse(piles.begin(),piles.end());
        int ans = 0;
        for(int i = 1; i <= piles.size()/3*2; i+=2){
            ans += piles[i];
        }
        return ans;
    }
};