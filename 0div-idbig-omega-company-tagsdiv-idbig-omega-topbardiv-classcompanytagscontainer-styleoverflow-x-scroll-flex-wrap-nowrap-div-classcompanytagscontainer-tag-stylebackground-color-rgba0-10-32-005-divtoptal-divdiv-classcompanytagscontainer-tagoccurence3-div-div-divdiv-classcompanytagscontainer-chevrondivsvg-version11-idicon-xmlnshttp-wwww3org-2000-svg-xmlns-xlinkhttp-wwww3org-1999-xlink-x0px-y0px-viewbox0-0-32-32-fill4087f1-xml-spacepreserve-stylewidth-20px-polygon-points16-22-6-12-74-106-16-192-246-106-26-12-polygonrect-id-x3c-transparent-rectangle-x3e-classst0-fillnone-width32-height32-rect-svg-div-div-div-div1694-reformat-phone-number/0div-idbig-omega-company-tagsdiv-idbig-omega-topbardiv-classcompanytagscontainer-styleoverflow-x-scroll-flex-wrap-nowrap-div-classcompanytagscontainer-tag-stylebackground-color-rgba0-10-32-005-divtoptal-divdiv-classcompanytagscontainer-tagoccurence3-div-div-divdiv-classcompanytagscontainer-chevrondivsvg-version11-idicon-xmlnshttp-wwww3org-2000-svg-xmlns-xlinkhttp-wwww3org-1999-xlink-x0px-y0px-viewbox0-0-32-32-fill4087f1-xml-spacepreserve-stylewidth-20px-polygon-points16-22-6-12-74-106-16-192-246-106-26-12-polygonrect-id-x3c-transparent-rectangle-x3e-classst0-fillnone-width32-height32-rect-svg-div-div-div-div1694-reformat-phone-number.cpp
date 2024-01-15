class Solution {
public:
    string reformatNumber(string number) {
        string temp = "";
        string ans = "";
        int count = 0;
        for(auto ch : number){
           if(isdigit(ch)){
               temp += ch;
           }
        }
        int len = temp.size();
        int i = 0;
        while(len > 0){
            if(len > 4){
                ans += temp.substr(i,i+3);
                temp.erase(i,3);
                ans += "-";
                len = len - 3;
            }
            else if(len == 3){
                ans += temp.substr(i,i+3);
                temp.erase(i,3);
                ans += "-";
                len = len - 3;
            }
            else if(len == 2){
                ans += temp.substr(i,i+2);
                temp.erase(i,2);
                ans += "-";
                len = len - 2;
            }
            else if(len == 4){
                ans += temp.substr(i,i+2);
                temp.erase(i,2);
                ans += "-";
                len = len - 2;
            }
        }
        ans.pop_back();
        return ans;
    }
};