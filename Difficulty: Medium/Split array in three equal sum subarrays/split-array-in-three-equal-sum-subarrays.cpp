//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    vector<int> findSplit(vector<int>& arr) {
        int total = 0; 
        vector<int> res;
        for ( auto i : arr ) total += i;
        if ( total%3 != 0 ) return {-1,-1};
        int currSum = 0;
        for ( int i = 0; i<arr.size(); i++ ){
            if ( currSum > total/3 ) return {-1,-1};
            currSum += arr[i];
            if ( currSum == total/3 ){
                res.push_back(i);
                currSum = 0;
            }
        } return res;
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends