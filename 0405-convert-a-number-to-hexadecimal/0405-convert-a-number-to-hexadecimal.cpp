class Solution {
public:
    string toHex(int num) {
        stringstream ss;
        ss << hex << num;
        string hexstr = ss.str();
        return hexstr;
    }
};