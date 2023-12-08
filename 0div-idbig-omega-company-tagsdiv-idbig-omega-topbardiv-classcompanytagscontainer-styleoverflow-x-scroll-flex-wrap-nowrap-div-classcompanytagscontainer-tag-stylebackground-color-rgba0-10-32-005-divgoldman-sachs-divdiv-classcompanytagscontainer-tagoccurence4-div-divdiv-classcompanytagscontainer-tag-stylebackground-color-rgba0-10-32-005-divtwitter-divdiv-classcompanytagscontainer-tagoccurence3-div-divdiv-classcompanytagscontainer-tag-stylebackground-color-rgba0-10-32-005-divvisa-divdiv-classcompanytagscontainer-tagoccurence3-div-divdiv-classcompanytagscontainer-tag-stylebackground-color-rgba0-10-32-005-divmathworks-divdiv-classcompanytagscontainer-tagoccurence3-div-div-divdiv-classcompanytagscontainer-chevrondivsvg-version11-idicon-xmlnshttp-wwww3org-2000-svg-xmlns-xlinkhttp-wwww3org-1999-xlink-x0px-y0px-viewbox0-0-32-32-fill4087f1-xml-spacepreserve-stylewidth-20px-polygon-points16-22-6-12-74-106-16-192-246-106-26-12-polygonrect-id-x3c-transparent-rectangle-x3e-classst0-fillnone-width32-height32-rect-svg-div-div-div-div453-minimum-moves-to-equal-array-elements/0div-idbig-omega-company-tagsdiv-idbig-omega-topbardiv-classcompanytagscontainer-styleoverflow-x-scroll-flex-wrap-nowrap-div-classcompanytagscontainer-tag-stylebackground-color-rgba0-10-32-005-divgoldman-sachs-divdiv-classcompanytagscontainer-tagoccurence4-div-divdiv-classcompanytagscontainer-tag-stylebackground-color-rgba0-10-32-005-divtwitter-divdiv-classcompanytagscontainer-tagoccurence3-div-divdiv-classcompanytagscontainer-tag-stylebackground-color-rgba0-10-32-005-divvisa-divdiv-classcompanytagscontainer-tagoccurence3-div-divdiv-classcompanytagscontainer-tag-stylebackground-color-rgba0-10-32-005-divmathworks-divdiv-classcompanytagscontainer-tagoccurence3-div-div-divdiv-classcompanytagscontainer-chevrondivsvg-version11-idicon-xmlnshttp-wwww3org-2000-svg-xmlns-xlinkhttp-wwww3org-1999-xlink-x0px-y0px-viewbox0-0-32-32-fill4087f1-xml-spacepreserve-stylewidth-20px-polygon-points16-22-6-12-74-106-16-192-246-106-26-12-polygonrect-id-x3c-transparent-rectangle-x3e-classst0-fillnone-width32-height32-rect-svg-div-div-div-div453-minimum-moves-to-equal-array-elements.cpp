class Solution {
public:
    int minMoves(vector<int>& nums) {
       int moves = 0;
       sort(nums.begin(),nums.end());
       int mini = nums[0];
       for(int i = 0; i < nums.size(); i++){
           moves += nums[i] - mini; 
       } 
        return moves;
    }
};
