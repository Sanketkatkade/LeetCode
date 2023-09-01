class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        int i = 0;
        while( i <= n){
            int count = 0;
            int num = i;
            while(num > 0){
                int rem = num % 2;
                if(rem == 1){
                    count++;
                }
                num = num / 2;
            }
                v.push_back(count);
                i++;
        }
        return v;
    }
};