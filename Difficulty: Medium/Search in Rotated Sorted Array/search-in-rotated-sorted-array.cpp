//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int n=arr.size();
        int end=n-1;
        int start=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==key) return mid;
            if(arr[mid]>=arr[start]){
                if(arr[start]<=key && arr[mid]>=key){
                    end=mid-1;
                }
                else start=mid+1;
            }else{
                if(arr[mid]<=key && key<=arr[end]){
                    start=mid+1;
                }
                else end=mid-1;
            }
        }
        
        return -1;
        // complete the function here
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
    }
    return 0;
}
// } Driver Code Ends