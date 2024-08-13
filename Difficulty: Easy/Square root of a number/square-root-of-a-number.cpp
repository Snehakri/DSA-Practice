//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        long long int low=1;
        long long int high=n;
        while(low<=high){
            long long int mid=(low+high)/2;
            if(mid*mid==n){
                return mid;
            }
            else if(mid*mid>n){
                high=mid-1;
            }
            else low=mid+1;
        }
        return high;
        // Your code goes here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends