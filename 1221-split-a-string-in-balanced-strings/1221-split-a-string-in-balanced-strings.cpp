class Solution {
public:
    int balancedStringSplit(string s) {
       int res = 0;
       int Rcount = 0;
       int Lcount = 0;
       for(int i = 0; i < s.size(); i++){
        if(s[i] == 'R'){
            Rcount++;
        }
        else{
            Lcount++;
        }
        if(Rcount == Lcount){
            res++;
            Rcount = 0;
            Lcount = 0;
        }
       } 
       return res;
    }
};