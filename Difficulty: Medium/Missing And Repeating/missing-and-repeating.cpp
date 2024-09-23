//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int xor_val=0;
        for(int i=1;i<=arr.size();i++){
            xor_val^=(i^arr[i-1]);
        }
        int num=(xor_val & ~(xor_val-1));
        int zero=0;
        int one=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if((arr[i] & num)!=0){
                one^=arr[i];
            }
            else{
                zero^=arr[i];
            }
        }
        for(int i=1;i<=n;i++){
            if((i & num)!=0){
                one^=i;
            }
            else{
                zero^=i;
            }
        }
        //int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==one){
                return {one,zero};
            }
        }
        return {zero,one};
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends