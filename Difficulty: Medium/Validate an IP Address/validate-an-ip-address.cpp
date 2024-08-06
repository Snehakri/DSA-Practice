//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        // code here
        for(int i=0;i<str.length();i++){
            int n=0;
            int count=0;
            while(str[i]!='.' && i<str.size()){
                int a=str[i]-'0';
                n=n*10+a;
                count++;
                i++;
            }
            if(n>255 || n<0 || count>=4) return false;
            if(str[i]=='.'){
                n=0;count=0;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends