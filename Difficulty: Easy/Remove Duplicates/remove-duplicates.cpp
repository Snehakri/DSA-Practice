//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
        vector<int> v(27,0);
        string s="";
        for(int i=0;i<str.size();i++){
            int n=str[i]-'a';
            if(v[n]==0){
                s=s+str[i];
            }
            v[n]++;
        }
        return s;
        
        // Your code goes here
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends