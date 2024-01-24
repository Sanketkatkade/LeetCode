class Solution {
public:
    string makeGood(string s) {
       int n = s.size();
       if(n == 1 || n == 0){
           return s;
       } 
       int i = 0;
       while(i < n - 1){
           if(abs(s[i] - s[i+1]) == 32){
               s.erase(s.begin()+i);
               s.erase(s.begin()+i);
               if(i > 0){
                   i--;
               }
                   n = s.size();
           }
               else{
                   i++;
               }
       }
       return s;
    }
};