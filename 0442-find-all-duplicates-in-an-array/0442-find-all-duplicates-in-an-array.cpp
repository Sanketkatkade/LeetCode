class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int>m;
        for(auto i : nums){
            m[i]++;
        }
        vector<int>v;
        unordered_map<int, int>::iterator it = m.begin();
        while(it != m.end()){
            if(it->second > 1){
                v.push_back(it->first);
            }
            it++;
        }
        return v;
    }
};
