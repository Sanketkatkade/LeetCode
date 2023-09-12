class Solution {
public:
    string getPermutation(int n, int k) {
        string str = "";
        for(int i = 1; i <= n; i++){
            str +=to_string(i);
        }
        
        int count = 1;
        if(count == k){
            return str;
        }
        
        while(next_permutation(str.begin(),str.end())){
            count++;
            if(count == k){
                return str;
            }
           
        }
        return 0;
    }
};