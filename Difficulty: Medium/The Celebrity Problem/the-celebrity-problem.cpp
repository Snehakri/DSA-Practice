//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        int n=mat.size();
        int i=0,j=n-1;
        while(i<j){
            if(mat[i][j]==0){
                j--;
            }
            else i++;
        }
        for(int k=0;k<n;k++){
            if(i!=k){
                if(mat[i][k]==1) return -1;
            } 
        }
        for(int k=0;k<n;k++){
            if(i!=k) {
                if(mat[k][i]==0) return -1;
            }
        }
        return i;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends