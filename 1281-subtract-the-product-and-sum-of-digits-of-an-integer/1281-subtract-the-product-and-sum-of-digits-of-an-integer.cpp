class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>v1;
        int sum = 0;
        int product = 1;
        int digit;
        while(n>0){
            digit=n%10;
            n/=10;
            v1.push_back(digit);
        }
    
   
    for(int i=0;i<v1.size();i++){
        sum+=v1[i];
        product*=v1[i];
    }
    return product - sum;

 }
};


