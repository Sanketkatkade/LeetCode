class Solution {
public:
    int minimumSum(int n, int k) {
        int sum = 0; 
        unordered_set<int>s;
        for(int i = 1; s.size() < n; i++){
            if(s.find(k-i)==s.end()){
            s.insert(i);
                sum+=i;
            }
        }
        return sum;
    }
};