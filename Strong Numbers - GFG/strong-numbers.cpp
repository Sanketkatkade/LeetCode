//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int isStrong(int n) {
        // code here
        int res = n;
        vector<int>v;
        while(n > 0){
            int digit = n % 10;
            v.push_back(digit);
            n = n / 10;
        }
        vector<int>v2;
        for(int i = 0; i < v.size(); i++){
            int res = 1;
            for(int j = 1; j <= v[i]; j++){
                res = res*j; 
            }
            v2.push_back(res);
        }
        int ans = 0;
        for(int i = 0; i < v2.size(); i++){
            ans += v2[i];
        }
        return ans == res;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}
// } Driver Code Ends