class Solution {
public:
    bool judgeCircle(string moves) {
       int LRCount = 0;
       int UDCount = 0;
       for(int i = 0; i < moves.size(); i++){
           if(moves[i] == 'R'){
               LRCount++;
           }
           if(moves[i] == 'L'){
            LRCount--;
           }
           if(moves[i] == 'U'){
               UDCount++;
           }
           if(moves[i] == 'D'){
               UDCount--;
           }
       } 
       return LRCount == 0 && UDCount == 0;
    }
};