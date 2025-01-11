//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
 unordered_map<char, int> lastseen; // Stores the last index of each character
   int ans=0,start=0;
   for(int i=0;i<s.length();i++){
       if(lastseen.find(s[i])!=lastseen.end() && lastseen[s[i]]>=start){
           start=lastseen[s[i]]+1;
       }
       lastseen[s[i]]=i;
       ans=max(ans,i-start+1);
   }
   return ans;
    }


};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends