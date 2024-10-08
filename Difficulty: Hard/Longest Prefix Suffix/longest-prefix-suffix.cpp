//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        int i=0,j=1;
        int pos=1;
        int count=0;
        while(j<str.size()){
            if(str[i]==str[j]){
                i++;
                j++;
                count++;
            }
            else{
                pos++;
                j=pos;
                i=0;
                count=0;
            }
        }
        return count;
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
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends