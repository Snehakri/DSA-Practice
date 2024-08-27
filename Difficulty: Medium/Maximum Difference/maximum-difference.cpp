//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        int n=arr.size();
        int pse[n];
        int nse[n];
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[i]<=st.top()){
                st.pop();
            }
            if(st.empty()) pse[i]=0;
            else pse[i]=st.top();
            st.push(arr[i]);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]<=st.top()){
                st.pop();  
            }
            if(st.empty()) nse[i]=0;
            else nse[i]=st.top();
            st.push(arr[i]);
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            int m=abs(pse[i]-nse[i]);
            maxi=max(maxi,m);
        }
        
        return maxi;
        // Your code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends