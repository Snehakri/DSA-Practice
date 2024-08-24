//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
       int n=wt.size();
       vector<vector<int>> dp(n+1,vector<int>(W+1,0));
       for(int i=1;i<=n;i++){
           for(int j=1;j<=W;j++){
               int take=0;
               int not_take=dp[i-1][j];
               if(wt[i-1]<=j){
                   take=val[i-1]+dp[i-1][j-wt[i-1]];
               }
               dp[i][j]=max(take,not_take);
           }
       }
       return dp[n][W];
        // Your code here
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends