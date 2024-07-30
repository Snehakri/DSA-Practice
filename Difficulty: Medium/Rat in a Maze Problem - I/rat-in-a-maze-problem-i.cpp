//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  void solve(int row,int col,string temp,vector<string> &ans,
           vector<vector<int>> &mat, vector<vector<int>>&vis,int dj[],int di[])
  {
      if(row==mat.size()-1 && col==mat[0].size()-1){
          ans.push_back(temp);
          return;
      }
      string str="DLRU";
      for(int i=0;i<4;i++){
          int ntrow=row+di[i];
          int ntcol=col+dj[i];
          if(ntrow>=0 && ntrow<mat.size() && ntcol>=0 && ntcol<mat.size() && !vis[ntrow][ntcol] && mat[ntrow][ntcol]==1){
              vis[row][col]=1;
              solve(ntrow,ntcol,temp+str[i],ans,mat,vis,dj,di);
              vis[row][col]=0;
          }
      }
      
  }
    vector<string> findPath(vector<vector<int>> &mat) {
        int n=mat.size();
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int>(n,0));
        int di[4]={1,0,0,-1};
        int dj[4]={0,-1,1,0};//D,L,R,U
        if(mat[0][0]==1) solve(0,0,"",ans,mat,vis,dj,di);
        return ans;
        // Your code goes here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends