class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int>v1,v2,v3,v4;
        for(int i = 0; i < s1.size(); i++){
            if(i % 2 == 0){
                v1.push_back(s1[i]);
                v3.push_back(s2[i]);
            }
            else{
                v2.push_back(s1[i]);
                v4.push_back(s2[i]);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        sort(v4.begin(),v4.end());

        for(int i = 0; i < v1.size(); i++){
            if(v1[i] != v3[i]){
                return false;
            }
        }

        for(int i = 0; i < v2.size(); i++){
            if(v2[i] != v4[i]){
                return false;
            }
        }
        return true;
    }
};