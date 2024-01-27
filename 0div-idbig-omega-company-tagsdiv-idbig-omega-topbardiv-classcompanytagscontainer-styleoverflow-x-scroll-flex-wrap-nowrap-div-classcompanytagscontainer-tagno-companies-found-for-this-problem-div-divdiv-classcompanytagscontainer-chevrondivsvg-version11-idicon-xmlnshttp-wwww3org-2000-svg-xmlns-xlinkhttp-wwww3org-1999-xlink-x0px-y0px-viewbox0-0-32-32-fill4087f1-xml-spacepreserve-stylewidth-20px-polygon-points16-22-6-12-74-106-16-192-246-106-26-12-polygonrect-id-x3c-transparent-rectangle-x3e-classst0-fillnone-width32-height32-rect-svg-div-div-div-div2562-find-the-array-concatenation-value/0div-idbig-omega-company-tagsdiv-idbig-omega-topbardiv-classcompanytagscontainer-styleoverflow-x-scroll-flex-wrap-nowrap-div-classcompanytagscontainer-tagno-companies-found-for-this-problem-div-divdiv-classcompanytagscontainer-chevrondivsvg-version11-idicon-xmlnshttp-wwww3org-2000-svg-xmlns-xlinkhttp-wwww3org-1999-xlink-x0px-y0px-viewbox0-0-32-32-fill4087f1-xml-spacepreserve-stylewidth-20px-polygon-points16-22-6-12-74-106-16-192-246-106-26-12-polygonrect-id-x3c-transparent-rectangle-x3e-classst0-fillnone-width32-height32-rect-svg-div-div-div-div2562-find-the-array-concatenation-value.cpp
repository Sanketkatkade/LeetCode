class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long res = 0;  
        int i = 0;
        int j = nums.size()-1 ;

        while(i <= j){
            if(i == j){
                res += nums[i];
                i++;
                j--;
            }
            else{
                string str1 = to_string(nums[i]);
                string str2 = to_string(nums[j]);
                string num = str1 + str2;
                int number = stoi(num);
                res += number;
                i++;
                j--;
            }
        }
        return res;
    }
};
