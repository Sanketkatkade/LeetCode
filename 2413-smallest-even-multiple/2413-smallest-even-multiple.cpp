class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0){
            return n;
        }
        else{
            for(int i=0;i<=n;i++){
                if(2*i==2*n){
                    return 2*i;
                }
            }
        }
        return 0;
    }
};