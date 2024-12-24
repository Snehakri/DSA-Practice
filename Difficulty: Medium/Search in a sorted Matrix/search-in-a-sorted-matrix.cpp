//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
    int n = mat.size();      // Number of rows
    int m = mat[0].size();   // Number of columns
    int low = 0, high = (n * m) - 1; // Range of indices for binary search

    while (low <= high) {
        int mid = (low + high) / 2;  // Find the middle index

        // Map 1D index to 2D matrix coordinates
        int row = mid / m;
        int col = mid % m;

        if (mat[row][col] == x)     // Element found
            return true;
        else if (mat[row][col] > x) // Search left half
            high = mid - 1;
        else                        // Search right half
            low = mid + 1;
    }

    return false; // Element not found
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends