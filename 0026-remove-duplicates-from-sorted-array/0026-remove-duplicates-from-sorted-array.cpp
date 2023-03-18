class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>m;
       for(int x:nums){
           m[x]++;
       } 
       vector<int>v1;
        for(auto x:m){
         v1.push_back(x.first);
        }
        nums=v1;
       return m.size();
    }
};