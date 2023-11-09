class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                if (i - 1 >= 0 && nums[i - 1] > nums[i + 1]) {
                    nums[i + 1] = nums[i];
                } else {
                    nums[i] = nums[i + 1];
                }
                break;
            }
        }

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }

        return true;
    }
};






// class Solution {
// public:
//     bool checkPossibility(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
//         for(int i = 1; i < n; i++){
//             if(nums[i] < nums[i-1]){
//                 if(i - 2 >= 0 && nums[i] < nums[i - 2]){
//                     nums[i] = nums[i - 1];
//                 }
//                 else{
//                     nums[i-1] = nums[i];
//                 }
//                 count++;
//             }
//             if(count > 1){
//                 return false;
//             }
//         }
//         return true;
//     }
// };


