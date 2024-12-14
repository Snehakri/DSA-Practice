//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int k) {
        // complete the function here
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==k){
                return mid;
            }
            if(arr[mid]>=arr[s]){
                if(arr[s]<=k && k<arr[mid]){
                    e=mid;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(arr[mid]<k && arr[e]>=k){
                    s=mid;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends