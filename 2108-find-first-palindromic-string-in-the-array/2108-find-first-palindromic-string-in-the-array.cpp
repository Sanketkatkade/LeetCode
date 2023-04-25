class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++){
            string res = words[i];
            for(int j = 0; j <= words[i].length() / 2; j++){
                int start = j;
                int end = words[i].length()-1-j;
                while(start <= end){
                    swap(res[start],res[end]);
                    start++;
                    end--;
                }
            }
            if (res == string(res.rbegin(), res.rend())) {
                return res;
            }
        }
        return "";
    }
};
