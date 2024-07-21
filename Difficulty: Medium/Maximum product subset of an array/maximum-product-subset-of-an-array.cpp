//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        long long mul=1;
        int mini=INT_MIN;
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count++;
                continue;
            }
            mul=(mul*1LL*arr[i])%1000000007;
            if(arr[i]<0) mini=max(arr[i],mini);
        }
        if(count==arr.size()) return 0;
        
        else if(mul<0 && arr.size()==1 && count==0) return mul;
        else if(mul<0 && (arr.size()-count)==1 ) return 0;
    
        if(mul<0) {
            mul/=mini;
        }
        return (1LL* mul)%1000000007;
        // Write your code here
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends