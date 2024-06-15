//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  vector<vector<int>> numbers = {{0,8},{1,2,4},{2,1,3,5},{3,2,6},{4,1,5,7},{5,2,4,6,8},{6,3,5,9},{7,4,8},{8,5,7,9,0},{9,6,8}};
    long long solve(int num, int count,vector<vector<long long>>& dp) {
        if(count == 0)
            return 1;
        if(dp[num][count] != -1)
            return dp[num][count];
        long long sum = 0;
        for(auto i : numbers[num]) {
            sum += solve(i, count - 1,dp);
        }
        return dp[num][count] = sum;
    }
    long long getCount(int N) {
        long long sum = 0;
        vector<vector<long long>> dp(10,vector<long long>(N,-1));
        for(int i = 0; i < 10; i++) {
            sum += solve(i, N - 1,dp);
        }
        return sum;   
    }
};
//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends