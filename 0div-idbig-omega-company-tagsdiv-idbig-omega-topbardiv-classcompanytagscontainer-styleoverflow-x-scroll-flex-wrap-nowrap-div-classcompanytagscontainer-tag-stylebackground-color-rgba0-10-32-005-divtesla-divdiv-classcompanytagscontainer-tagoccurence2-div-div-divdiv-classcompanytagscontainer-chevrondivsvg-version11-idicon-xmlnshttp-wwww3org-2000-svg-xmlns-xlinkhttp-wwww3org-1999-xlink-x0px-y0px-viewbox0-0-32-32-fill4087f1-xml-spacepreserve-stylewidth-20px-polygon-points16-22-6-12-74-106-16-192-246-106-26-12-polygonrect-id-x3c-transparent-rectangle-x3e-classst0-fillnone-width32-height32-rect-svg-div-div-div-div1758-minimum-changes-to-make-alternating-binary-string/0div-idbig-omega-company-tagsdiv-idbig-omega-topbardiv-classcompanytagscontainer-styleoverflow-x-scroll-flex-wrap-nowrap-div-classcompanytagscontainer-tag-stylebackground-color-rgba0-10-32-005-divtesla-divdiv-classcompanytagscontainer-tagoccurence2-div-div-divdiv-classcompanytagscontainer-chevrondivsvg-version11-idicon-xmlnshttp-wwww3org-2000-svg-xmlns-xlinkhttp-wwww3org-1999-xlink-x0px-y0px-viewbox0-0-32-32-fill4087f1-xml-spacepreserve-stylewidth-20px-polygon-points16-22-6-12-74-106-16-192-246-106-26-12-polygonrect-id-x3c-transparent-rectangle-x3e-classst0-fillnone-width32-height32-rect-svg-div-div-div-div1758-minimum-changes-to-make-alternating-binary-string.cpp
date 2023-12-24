class Solution {
public:
    int minOperations(string s) {
        string str1 , str2;
        for(int i = 0; i < s.size(); i++){
            if(i % 2 == 0){
                str1.push_back('0');
                str2.push_back('1');
            }
            else{
                str1.push_back('1');
                str2.push_back('0');
            }
        }

        int count1 = 0 , count2 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == str1[i]){
                count1++;
            }
            if(s[i] == str2[i]){
                count2++;
            }
        }
        return min(count1,count2);
    }
};