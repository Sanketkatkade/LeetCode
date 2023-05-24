class Solution {
public:
    vector<int> sumZero(int n) {
        int element =-(n);
        vector<int>v;
        for(int i = 0; i < n / 2; i++){
          v.push_back(element); 
          v.push_back(abs(element));
          element++;     
        }
        if(n%2 != 0){
            v.push_back(0);
        }
        return v;
    }
};