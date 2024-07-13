class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
       int res = 0;
        for(char c : s){
            if(c == '('){
                st.push(c);
                if(st.size() > res){
                    res = st.size();
                }
            }
            else if(c == ')'){
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        return res;
    }
};