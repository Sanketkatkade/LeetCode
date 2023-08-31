//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

    bool flag = true;
    bool isPalindrome(string s){
        int start = 0;
        int end = s.size()-1;
        while(start <= end){
            if(s[start] != s[end]){
                flag = false;
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
	
	int isRotatedPalindrome(string s)
	{
	    // code here
	    for(int i = 0; i < s.size(); i++){
	        if(isPalindrome(s)){
	            return 1;
	        }
	        char firstChar = s[0];
	        s.erase(0,1);
	        s += firstChar;
	    }
	    return 0;
	}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.isRotatedPalindrome(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends