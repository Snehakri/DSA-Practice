//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    /**
     * This function searches for a given value `x` in a 2D matrix `mat`.
     * @param mat - 2D vector representing the matrix
     * @param x - The value to search for in the matrix
     * @return - Returns true if the value `x` is found; otherwise, returns false
     */
    bool matSearch(vector<vector<int>> &mat, int x) {
        // Step 1: Get the number of rows in the matrix
        int rows = mat.size();
        
        // Step 2: Handle the edge case of an empty matrix
        if (rows == 0) return false;
        
        // Step 3: Get the number of columns in the matrix
        int cols = mat[0].size();
        
        // Step 4: Traverse each row of the matrix
        for (int i = 0; i < rows; i++) {
            // Step 5: Traverse each column in the current row
            for (int j = 0; j < cols; j++) {
                // Step 6: Check if the current element matches the target value `x`
                if (mat[i][j] == x) {
                    // If a match is found, return true immediately
                    return true;
                }
            }
        }
        
        // Step 7: If no match is found after traversing the entire matrix, return false
        return false;
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
        int x;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }
        cin >> x;
        Solution ob;
        bool an = ob.matSearch(matrix, x);
        if (an)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends