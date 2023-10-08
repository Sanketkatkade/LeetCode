class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<int>v(26,-1);
        int k = 0;
        for(int i = 0; i < key.size(); i++){
            if(key[i] != ' ' && v[key[i] - 'a'] == -1){
                v[key[i] - 'a'] = k++;
            }
        }

        for(int i = 0; i < message.size(); i++){
            if(message[i] != ' '){
                message[i] = v[message[i] - 'a'] + 'a';
            }
        }
        return message;
    }
};