//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        vector<int> v(26,-1);
        int si=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==' ') continue;
            int n=str[i]-'a';
            v[n]++;
            si++;
        }
        //cout<<si<<endl;
        if(si<26) return false;
        int count=0;
        for(auto i:v){
            if(i==-1) count++;
        }
        if(count<=k) return true;
        return false;
        
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends