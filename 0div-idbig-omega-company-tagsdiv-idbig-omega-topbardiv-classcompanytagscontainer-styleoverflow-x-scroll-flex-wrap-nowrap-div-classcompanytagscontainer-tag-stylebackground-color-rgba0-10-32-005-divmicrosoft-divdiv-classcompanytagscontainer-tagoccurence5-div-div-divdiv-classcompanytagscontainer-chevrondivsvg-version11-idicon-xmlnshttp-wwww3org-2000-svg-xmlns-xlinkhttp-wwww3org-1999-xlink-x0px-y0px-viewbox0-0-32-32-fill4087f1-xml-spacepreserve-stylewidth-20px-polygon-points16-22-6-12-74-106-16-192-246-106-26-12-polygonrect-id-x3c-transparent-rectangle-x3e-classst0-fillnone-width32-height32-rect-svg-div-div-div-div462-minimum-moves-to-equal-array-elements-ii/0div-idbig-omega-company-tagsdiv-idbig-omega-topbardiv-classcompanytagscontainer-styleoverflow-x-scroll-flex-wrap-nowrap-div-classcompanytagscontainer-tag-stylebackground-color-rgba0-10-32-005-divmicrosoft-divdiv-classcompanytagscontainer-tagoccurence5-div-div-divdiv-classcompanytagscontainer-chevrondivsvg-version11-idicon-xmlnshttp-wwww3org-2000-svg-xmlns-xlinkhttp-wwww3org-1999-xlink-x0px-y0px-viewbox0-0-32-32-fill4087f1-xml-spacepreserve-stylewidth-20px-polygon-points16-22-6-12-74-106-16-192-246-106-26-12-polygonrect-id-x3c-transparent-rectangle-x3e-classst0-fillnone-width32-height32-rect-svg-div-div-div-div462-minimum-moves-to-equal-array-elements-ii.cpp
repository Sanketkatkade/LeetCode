class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int Number = nums[nums.size()/2];
        int moves = 0;
        for(int i = 0; i < nums.size(); i++){
            if(Number == nums[i]){
                moves += 0;
            }
            else if(Number > nums[i]){
                moves += (Number - nums[i]);
            }
            else{
                moves += (nums[i] - Number);
            }
        }
        return moves;
    }
};