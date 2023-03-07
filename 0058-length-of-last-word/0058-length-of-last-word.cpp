class Solution {
public:
    int lengthOfLastWord(string s) {
      int count = 0;
      bool wordStarted = false;
      for(int i = s.size()-1;i>=0;i--){
          if(s[i] == ' ' && wordStarted == false)
          {
              continue;
          }
          else if(s[i] != ' ')
          {
              count++;
              wordStarted = true;
          }
          else{
              break;
          }
      }
      return count;
    }
};