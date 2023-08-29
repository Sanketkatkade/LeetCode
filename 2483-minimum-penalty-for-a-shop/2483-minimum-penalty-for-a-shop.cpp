class Solution {
public:
    int bestClosingTime(string customers) {
        int count = 0;
        int ans = 0;
        int maxi = 0;
        for(int i = 0; i < customers.size(); i++){
            if(customers[i] == 'Y'){
                count++;
            }
            else{
                count--;
            }
        
            if(count > maxi){
                ans = i + 1;
                maxi = count;
            }
        }
        return ans;
    }
};