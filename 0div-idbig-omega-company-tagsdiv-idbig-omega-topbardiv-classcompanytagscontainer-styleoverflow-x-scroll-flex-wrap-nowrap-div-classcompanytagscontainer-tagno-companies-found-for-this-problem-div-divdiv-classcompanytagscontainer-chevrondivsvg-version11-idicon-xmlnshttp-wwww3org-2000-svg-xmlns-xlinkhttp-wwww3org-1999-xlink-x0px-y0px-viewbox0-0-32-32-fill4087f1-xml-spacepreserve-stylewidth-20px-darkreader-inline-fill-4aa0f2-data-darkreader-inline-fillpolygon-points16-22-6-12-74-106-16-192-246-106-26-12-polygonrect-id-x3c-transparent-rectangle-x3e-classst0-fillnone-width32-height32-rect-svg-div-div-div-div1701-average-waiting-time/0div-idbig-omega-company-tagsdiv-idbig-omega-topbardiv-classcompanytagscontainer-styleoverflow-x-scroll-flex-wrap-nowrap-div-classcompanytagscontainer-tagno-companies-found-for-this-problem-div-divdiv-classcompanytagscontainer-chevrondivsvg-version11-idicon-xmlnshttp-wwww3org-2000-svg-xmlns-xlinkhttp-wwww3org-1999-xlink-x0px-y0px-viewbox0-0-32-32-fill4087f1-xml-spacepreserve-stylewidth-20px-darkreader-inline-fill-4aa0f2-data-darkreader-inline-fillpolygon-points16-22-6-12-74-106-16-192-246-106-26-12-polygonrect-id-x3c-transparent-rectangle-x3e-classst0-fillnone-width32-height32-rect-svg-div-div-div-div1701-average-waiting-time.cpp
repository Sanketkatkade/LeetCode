class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double TotalTime = customers[0][0];
        double waitTime = 0;
        for(int i = 0; i < customers.size(); i++){
            if(customers[i][0] < TotalTime){
                TotalTime += customers[i][1];
                waitTime += TotalTime - customers[i][0];
            }        
            else{
                TotalTime = customers[i][0] + customers[i][1];
                waitTime += customers[i][1];
            }
        }
        return waitTime/customers.size();
    }
};