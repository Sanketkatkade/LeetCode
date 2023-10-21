class Solution {
public:

    int digitSum(int n){
        int s = 0;
        while(n > 0){
            s += n % 10;
            n /= 10;
        }
        return s;
    }

    int countLargestGroup(int n) {
        vector<int> v(100, 0);
        for(int i = 1; i <= n; i++){
            v[digitSum(i)]++;
        }
        int maxi = 0; 
        int c = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == maxi){
                c++;
            }
            else if (v[i] > maxi) {
                maxi = v[i]; 
                c = 1; 
            }
        }
        return c;
    }
};
