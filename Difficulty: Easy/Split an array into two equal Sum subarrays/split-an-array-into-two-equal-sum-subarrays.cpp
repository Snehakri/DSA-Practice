//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n=arr.size();
        if(n<2) return false;
        int i=0,j=n-1;
        int sumi=arr[0],sumj=arr[n-1];
        while(i<j){
            // cout<<sumi<<" "<<sumj<<endl;
            if(sumi<sumj){
                i++;
               if(i<j)  sumi+=arr[i];
            }
            else{
               j--;
               if(i<j) sumj+=arr[j];
            }
        }
        if(sumi==sumj){
                return true;
        }
        return false;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends