//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int count=0;
        int n=matrix[0].size();
        int m=matrix.size();
        vector<int> ans;
        int sr=0,sc=0,er=m-1,ec=n-1;
        while(sr<=er && sc<=ec){
            for(int i=sc;i<=ec && sr<=er ;i++){
                ans.push_back(matrix[sr][i]);
            }
            sr++;
            for(int i=sr;i<=er && sc<=ec;i++){
                ans.push_back(matrix[i][ec]);
            }
            ec--;
            for(int i=ec;i>=sc && sr<=er;i--){
                ans.push_back(matrix[er][i]);
            }
            er--;
            for(int i=er;i>=sr && sc<=ec;i--){
                ans.push_back(matrix[i][sc]);
            }
            sc++;
            
        }
        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends