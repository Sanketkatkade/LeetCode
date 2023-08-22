class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber;
        string str = "";
        while(n > 0){
           n--;
           int res = n % 26;
           str += ('A' + res);
           n /= 26;
       } 
       reverse(str.begin(),str.end());
       return str;
    }
};
