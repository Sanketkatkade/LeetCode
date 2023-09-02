// with while loop 

class Solution {
    public :
        vector<vector<int>> permute(vector<int>& nums) {
        
            vector<vector<int>>res;

            sort(nums.begin(),nums.end());

            res.push_back(nums);

            while(next_permutation(nums.begin(),nums.end())){
                res.push_back(nums);
            }

            return res;            
        }
};

// with do-while-loop
// lass Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
        
//         vector<vector<int>>res;
        
//         sort(nums.begin(),nums.end());
        
//         do {
            
//             res.push_back(nums);
            
//         } while (next_permutation(nums.begin(), nums.end()));

//         return res;
//     }
// };
