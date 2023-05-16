class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>v;
        v.push_back(first);
        int res = first;
        for(int i = 0; i < encoded.size(); i++){
        res = res ^ encoded[i];
            v.push_back(res);
        }
        return v;
    }
};