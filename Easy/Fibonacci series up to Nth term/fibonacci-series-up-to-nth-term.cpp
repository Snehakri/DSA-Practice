//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    const int m=1e9+7;
    vector<int> Series(int n) {
        vector<int> v;
        v.push_back(0);
        if(n<=0) return v;
        v.push_back(1);
        long int a=0;
        long int b=1;
        for(int i=2;i<=n;i++){
            long int sum=(a%m+b%m)%m;
            v.push_back(sum);
            a=b;
            b=sum;
        }
        return v;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends