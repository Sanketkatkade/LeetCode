//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    int isReversible(string str, int n) { 
         //complete the function here
         string str2;
         for(int i = str.size()-1; i >=0; i--){
             str2.push_back(str[i]);
         }
         if(str == str2){
             return 1;
         }
         return 0;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution obj;
        cout << obj.isReversible(s, n) << endl;
    }
return 0;
}


// } Driver Code Ends