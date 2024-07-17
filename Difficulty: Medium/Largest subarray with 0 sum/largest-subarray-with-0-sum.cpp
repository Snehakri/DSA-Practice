//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        unordered_map<int,int> m;
        m[0]=-1;
        int ps=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            ps+=arr[i];
            if(m.find(ps)!=m.end()){
                int dif=i-m[ps];
                maxi=max(maxi,dif);
            }
            else m[ps]=i;
        }
        return maxi;
        // Your code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends