//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        int fst=1;
        int sec=1;
        int mod=1000000007;
        for(int i=2;i<n;i++){
            int sum=(fst+sec)%mod;
            fst=sec%mod;
            sec=sum%mod;
        }
        return sec%mod;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends