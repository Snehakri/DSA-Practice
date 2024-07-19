//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree < int ,  null_type ,  less_equal<int> ,  rb_tree_tag ,  tree_order_statistics_node_update >
class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        vector<int> v(arr.size(),0);
        //ordered_set o_set; 
        ordered_set st;
        for(int i=arr.size()-1;i>=0;i--){
            v[i]=st.order_of_key(arr[i]);
            st.insert(arr[i]);
        }
        return v;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends