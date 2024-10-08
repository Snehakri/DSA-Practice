//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        if(N<2){
            return "No";
        }
        for(int i=2;i<=N/2;i++){
            if(isprime(i) && isprime(N-i)){
                return "Yes";
            }
        }
        return "No";
        // code here
    }
    bool isprime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends