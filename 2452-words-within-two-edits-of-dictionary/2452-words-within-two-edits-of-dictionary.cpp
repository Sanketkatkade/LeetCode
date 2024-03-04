class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>str;
        int count = 0;
        for(int i = 0; i < queries.size(); i++){
            for(int j = 0; j < dictionary.size(); j++){
                count = 0;
                for(int k = 0; k < queries[0].size(); k++){
                    if(queries[i][k] != dictionary[j][k]){
                        count++;
                    }
                }
                    if(count <= 2){
                        str.push_back(queries[i]);
                        break;
                    }
            }
        }
        return str;
    }
};