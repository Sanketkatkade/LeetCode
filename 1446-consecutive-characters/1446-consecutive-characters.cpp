class Solution {
public:
    int maxPower(string s) {
        vector<int>v;
        for(int i = 0; i < s.size(); i++){
        int count = 1;
            for(int j = i+1; j < s.size(); j++){
                if(s[i]==s[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            v.push_back(count);
        }
        if(v.empty()){
            return 0;
        }
        int max_elem = v[0];
        for (int i = 1; i < v.size(); i++) {
            if (v[i] > max_elem) {
            max_elem = v[i];
            }
        }
        return max_elem;
    }
};