class Solution {
public:
    int firstUniqChar(string s) {
       map<char,int>count;
       for(char c : s){
           count[c]++;
       }
       for(int i = 0; i < s.length(); i++){
           if(count[s[i]]==1){
               return i;
           }
       }
       return -1;
    }
};