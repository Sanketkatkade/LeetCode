class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>v(2001);
            int j = 0,x=0;
        for(int i = 1; i <= 2001; i++){
            if(j < arr.size() && i == arr[j]){
                j++;

            }

            else{
                v[x]=i;
                if(x+1 == k){
                    return v[x];
                }
                x++;
            }
        }   
        return -1;
    }
};
