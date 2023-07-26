//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int>m;
        for(char ch : str){
            m[ch]++;
        }
            int max = 0;
            char maxchar = '\0';
        for(const auto &pair : m){
            if(pair.second > max){
                max = pair.second;
                maxchar = pair.first;
            }
        }
        return maxchar;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends