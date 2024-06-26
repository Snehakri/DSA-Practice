//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// class Solution {
//   public:
//     int findCoverage(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         // vector<vector<int>> v(n,vector<int> (m,0));
//         // for(int i=0;i<n;i++){
//         //     for(int j=0;j<m;j++){
//         //         if(i==0){
//         //             v[i][j]=matrix[i][j];
//         //         }
//         //         else if(j==0){
//         //             v[i][j]=matrix[i][j]+matrix[i-1][j];
//         //         }
//         //         else {
//         //             v[i][j]=matrix[i][j]+matrix[i-1][j] +matrix[i][j-1];
//         //         }
//         //     }
//         // }
//         int sum=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==1) {
//                     continue;
//                 }
//                 if(i-1>=0 && matrix[i-1][j]==1 ) sum++;
//                 if(i+1<n && matrix[i+1][j]==1) sum++;
//                 if(j-1>=0 && matrix[i][j-1]==1 ) sum++;
//                 if(j+1<n && matrix[i][j+1]==1 ) sum++;
//             }
//         }
//         return sum;
//         // Code here
//     }
// };
class Solution {
public:
    int findCoverage(vector<vector<int>>&matrix){
        // CodeGenius
        // i-1>=0 , i+1<n
        //j-1>=0 , j+1<n
        int ans =0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    continue;
                }
                if(i-1>=0 and matrix[i-1][j]==1)
                ans++;
                if(i+1<n and matrix[i+1][j]==1)
                ans++;
                if(j-1>=0 and matrix[i][j-1]==1)
                ans++;
                if(j+1<m and matrix[i][j+1]==1)
                ans++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends