//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int countFactors(int n){
        //code here
        int count = 0;
        int num = n;
        for(int i = 1; i <= n; i++){
            if(num % i == 0){
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.countFactors(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends