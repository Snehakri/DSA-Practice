//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxPartitions(string &s) {
        vector<int> v(26,-1); 
        for(int i =0;i<s.size();i++){
            int idx = s[i]-'a'; 
            v[idx] = i; 
        }
        
        int last = -1; 
        int count = 0; 
        for(int i =0;i<s.size();i++){
            int idx = s[i]-'a'; 
            last = max(last,v[idx]); 
            if(i == last){
                count++; 
                last = -1; 
            }
        }
        
        return count; 
    }
};




//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.maxPartitions(s) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends