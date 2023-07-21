class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
       vector<int>pos;
       vector<int>ans;
       for(int i = 0; i < s.length(); i++){
           if(s[i] == c){
               pos.push_back(i);
           }
       } 
       for(int i = 0; i < s.length(); i++){
       int Min = INT_MAX;
       for(int j = 0; j < pos.size(); j++){
           Min = min(Min,abs(i - pos[j]));
       }           
            ans.push_back(Min);
       }
       return ans;
    }
};