class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int start = 1;
        int day = 0;
        while(n--){
            sum+=start+day;
            day++;
            if(day==7){
                day=0;
                start+=1;
            }
        }
       
        return sum;
    }
};