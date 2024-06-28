//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool palindrome(int arr[],int n){
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[n-1-i]){
                return false;
            }
        }
        return true;
    }
    string pattern(vector<vector<int>> &arr) {
        int n=arr.size();
        string ans="-1";
        for(int i=0;i<n;i++){
            int curr[n];
            for(int j=0;j<n;j++){
                curr[j]=arr[i][j];
            }
            if(palindrome(curr,n)){
                ans=to_string(i)+" R";
                return ans;
            }
        }
        for(int i=0;i<n;i++){
            int curr[n];
            for(int j=0;j<n;j++){
                curr[j]=arr[j][i];
            }
            if(palindrome(curr,n)){
                ans=to_string(i)+" C";
                return ans;
            }
        }
        return ans;
        // Code Here
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends