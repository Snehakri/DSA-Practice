//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here        
        string temp = "", ans = "";
        
        for(int i=str.size()-1; i>=0; i--)
        {
            if(str[i] == '.')
            {
                if(temp != "")
                {
                    if(ans != "")  ans += ".";
                    
                    ans += temp;
                    temp = "";
                }
            }
            else temp = str[i] + temp;
        }
        
        if(temp != "")
        {
            if(ans != "") ans += ".";
            ans += temp;
        }        
        return ans;
    }


};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends