//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
   int solve(vector<vector<int>> &dp,int i,int j,vector<int> &cost){
       if(i<0) return 1e9;
       if(j<0) return 1e9;
       if(j==0) return 0;
       if(dp[i][j]!=1e9){
           return dp[i][j];
       }
       int take=1e9;
       if(cost[i]!=-1 && i<j){
           take=cost[i]+solve(dp,i,j-(i+1),cost);
       }
       int not_take=solve(dp,i-1,j,cost);
       return dp[i][j]=min(take,not_take);
   }
    int minimumCost(int n, int w, vector<int> &cost) {
        vector<vector<int>> dp(n,vector<int>(w+1,1e9));
        return solve(dp,n-1,w,cost);
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int w;
        scanf("%d", &w);

        vector<int> cost(n);
        Array::input(cost, n);

        Solution obj;
        int res = obj.minimumCost(n, w, cost);

        cout << res << endl;
    }
}

// } Driver Code Ends