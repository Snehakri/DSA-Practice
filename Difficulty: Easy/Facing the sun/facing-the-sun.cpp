//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {                            
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int maxi=INT_MIN;
        int count=0;
        for(int i=0;i<height.size();i++){
            if(maxi<height[i]){
                maxi=height[i];
                count++;
            }
        }
        return count;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> height;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            height.push_back(number);
        }
        Solution ob;
        int ans = ob.countBuildings(height);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends