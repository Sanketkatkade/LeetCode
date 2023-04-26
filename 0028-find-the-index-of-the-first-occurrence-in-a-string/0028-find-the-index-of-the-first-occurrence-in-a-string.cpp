class Solution {
public:
    int strStr(string haystack, string needle) {
       for(int i = 0; i < haystack.size(); i++){
           if(haystack.find(needle,i)==i){
               return i;
           }
       } 
       return -1;
    }
};