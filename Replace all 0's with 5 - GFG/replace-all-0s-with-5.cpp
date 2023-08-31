//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends


class Solution{
public:
    int convertFive(int n) {
        vector<int> v;
        while (n > 0) {
            int digit = n % 10;
            v.push_back(digit);
            n /= 10;
        }
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 0) {
                v[i] = 5; 
            }
        }
        int res = 0;
        for (int i = 0; i < v.size(); i++) {
            res = res * 10 + v[i]; 
        }
        return res;
    }
};




//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends