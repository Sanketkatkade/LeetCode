class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>m;
        vector<int>v;
        int n = arr.size();
        for(int i=0; i<n; i++)
            m[arr[i]]++; // m[arr[i]]=m[arr[i]]+1;

        for(auto x: m) 
            v.push_back(x.second);
        set<int>s(v.begin(), v.end());

        return s.size()==v.size();
    }
};