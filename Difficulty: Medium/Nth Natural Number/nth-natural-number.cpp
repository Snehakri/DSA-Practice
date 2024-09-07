//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long findNth(long long n) {
         long long ans=0;
          long long p=1;
          while(n>0){
              int r=n%9;
              //cout<<r<<" "<<n<<endl;
              ans+=p*r;
              p*=10;
              n/=9;
          }
          return ans;
        // code here.
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        Solution obj;
        ans = obj.findNth(n);
        cout << ans << endl;
    }
}

// } Driver Code Ends