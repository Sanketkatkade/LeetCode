class Solution {
public:
    string freqAlphabets(string s) {
       unordered_map<string, char> map = {
            {"1", 'a'}, {"2", 'b'}, {"3", 'c'}, {"4", 'd'}, {"5", 'e'},
            {"6", 'f'}, {"7", 'g'}, {"8", 'h'}, {"9", 'i'}, {"10#", 'j'},
            {"11#", 'k'}, {"12#", 'l'}, {"13#", 'm'}, {"14#", 'n'}, {"15#", 'o'},
            {"16#", 'p'}, {"17#", 'q'}, {"18#", 'r'}, {"19#", 's'}, {"20#", 't'},
            {"21#", 'u'}, {"22#", 'v'}, {"23#", 'w'}, {"24#", 'x'}, {"25#", 'y'}         ,           {"26#", 'z'}
        };
        string result;
        int i = 0;
        while(i < s.size()){
            if(i+2 < s.size() && s[i+2] == '#'){
                // string ans = s.substr(i , 3);
                result += map[s.substr(i , 3)];
                i+=3;
            }
            else{
                // string ans = s.substr(i , 1);
                result += map[s.substr(i , 1)];
                i+=1;
            }
        }
        return result;
    }
};