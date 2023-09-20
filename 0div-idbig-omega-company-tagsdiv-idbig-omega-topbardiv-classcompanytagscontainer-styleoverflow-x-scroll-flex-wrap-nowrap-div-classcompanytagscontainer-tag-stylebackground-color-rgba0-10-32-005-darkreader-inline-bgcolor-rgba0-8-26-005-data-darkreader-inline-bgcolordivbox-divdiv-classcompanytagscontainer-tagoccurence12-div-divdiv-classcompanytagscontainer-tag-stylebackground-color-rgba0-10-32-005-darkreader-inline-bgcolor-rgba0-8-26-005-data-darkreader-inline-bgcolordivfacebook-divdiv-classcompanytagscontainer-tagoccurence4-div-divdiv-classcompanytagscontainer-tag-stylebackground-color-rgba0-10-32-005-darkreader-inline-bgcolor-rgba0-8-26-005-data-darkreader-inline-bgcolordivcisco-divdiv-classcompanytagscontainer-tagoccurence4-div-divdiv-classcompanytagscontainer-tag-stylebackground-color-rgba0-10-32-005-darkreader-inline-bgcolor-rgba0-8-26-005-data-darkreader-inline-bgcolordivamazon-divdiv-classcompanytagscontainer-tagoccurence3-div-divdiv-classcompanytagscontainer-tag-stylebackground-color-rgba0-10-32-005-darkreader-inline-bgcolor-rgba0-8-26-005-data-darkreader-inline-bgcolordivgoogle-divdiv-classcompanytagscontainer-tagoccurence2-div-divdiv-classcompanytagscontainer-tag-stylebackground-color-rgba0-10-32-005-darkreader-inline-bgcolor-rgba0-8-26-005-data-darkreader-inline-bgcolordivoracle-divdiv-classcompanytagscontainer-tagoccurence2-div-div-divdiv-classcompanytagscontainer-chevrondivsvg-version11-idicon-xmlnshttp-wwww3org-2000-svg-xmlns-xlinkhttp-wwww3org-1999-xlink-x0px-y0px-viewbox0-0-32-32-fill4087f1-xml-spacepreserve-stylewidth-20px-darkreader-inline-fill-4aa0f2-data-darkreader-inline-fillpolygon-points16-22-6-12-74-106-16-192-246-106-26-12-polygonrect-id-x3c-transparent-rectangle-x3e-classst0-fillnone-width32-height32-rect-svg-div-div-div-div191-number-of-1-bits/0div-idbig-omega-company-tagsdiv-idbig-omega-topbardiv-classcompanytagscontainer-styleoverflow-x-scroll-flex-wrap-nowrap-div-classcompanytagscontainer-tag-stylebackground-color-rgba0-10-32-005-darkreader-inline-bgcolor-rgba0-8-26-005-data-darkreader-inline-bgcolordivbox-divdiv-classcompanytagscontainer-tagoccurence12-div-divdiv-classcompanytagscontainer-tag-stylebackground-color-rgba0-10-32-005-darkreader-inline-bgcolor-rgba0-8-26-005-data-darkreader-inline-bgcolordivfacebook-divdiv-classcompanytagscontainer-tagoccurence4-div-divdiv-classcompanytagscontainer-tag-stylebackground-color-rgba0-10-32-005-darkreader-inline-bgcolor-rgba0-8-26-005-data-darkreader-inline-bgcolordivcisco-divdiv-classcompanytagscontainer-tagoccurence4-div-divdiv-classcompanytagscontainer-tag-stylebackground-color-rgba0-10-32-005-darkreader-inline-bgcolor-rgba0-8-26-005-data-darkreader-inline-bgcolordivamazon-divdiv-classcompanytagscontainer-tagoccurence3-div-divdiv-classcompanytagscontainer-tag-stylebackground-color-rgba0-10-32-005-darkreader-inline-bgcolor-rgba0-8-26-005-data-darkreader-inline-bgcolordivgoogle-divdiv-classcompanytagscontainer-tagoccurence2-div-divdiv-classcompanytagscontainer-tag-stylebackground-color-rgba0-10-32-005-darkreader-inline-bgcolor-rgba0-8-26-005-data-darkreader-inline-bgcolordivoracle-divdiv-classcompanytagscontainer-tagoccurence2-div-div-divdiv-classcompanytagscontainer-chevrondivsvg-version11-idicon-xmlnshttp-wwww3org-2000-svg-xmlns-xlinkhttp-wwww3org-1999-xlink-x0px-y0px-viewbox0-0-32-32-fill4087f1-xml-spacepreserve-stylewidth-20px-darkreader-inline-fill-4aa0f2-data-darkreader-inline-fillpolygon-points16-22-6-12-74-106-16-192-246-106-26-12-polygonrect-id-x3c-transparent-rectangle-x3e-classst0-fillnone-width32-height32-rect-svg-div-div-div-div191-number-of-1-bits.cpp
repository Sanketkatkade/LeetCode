class Solution {
public:
    int hammingWeight(uint32_t n) {
        string str = bitset<sizeof(int) * 8>(n).to_string();
        int count = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i]=='1'){
                count++;
            }
        }
        return count;
    }
};