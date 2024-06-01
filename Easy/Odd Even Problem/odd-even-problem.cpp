//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int x=0,y=0;
        // for(int i=0;i<s.size();i++){
        //     int n=s[i]-'a'+1;
        //     if((n%2==0) && (m[s[i]]%2==0)) x++;
        //     else if((n%2!=0) && (m[s[i]]%2!=0)) y++;

        // }
        for(auto i:m){
            int n=i.first-'a'+1;
            if((n%2==0) && (i.second%2==0)) x++;
            else if((n%2!=0) && (i.second%2!=0)) y++;
        }
        // cout<<x<<y;
        if((x+y)%2!=0) return "ODD";
        else return "EVEN";
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends