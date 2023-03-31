class Solution {
public:
    string interpret(string command) {
        for(int i=0; i<command.length(); i++){
        if(command[i]=='(' && command[i+1]==')'){
            command.replace(i,2,"o");
            i--;
        }
        else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
            command.replace(i,4,"al");
            i+=1;
        }
    }
    return command;
    }
};