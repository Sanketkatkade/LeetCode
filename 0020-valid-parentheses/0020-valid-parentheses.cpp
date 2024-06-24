class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                stk.push(c);
            }
            else if(c == ')' || c == ']' || c == '}'){
                if(stk.empty()){
                    return 0;
                }
                char top = stk.top();
                stk.pop();
                
                if((c == ')' && top != '(') || 
                  (c == ']' && top != '[') ||
                  (c == '}' && top != '{') ) {
                    return false;
                }
                
            }
        }
        return stk.empty();
    }
};