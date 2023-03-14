class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // accounts[i][j];
        int max_sum=0;
       for(int i=0;i<accounts.size();i++){
           int current_sum=0;
           for(int j=0;j<accounts[i].size();j++){
               current_sum = current_sum+ accounts[i][j];
               if(current_sum>=max_sum){
                   max_sum=current_sum;
               }
           }
       }
       return max_sum;
    }
};

