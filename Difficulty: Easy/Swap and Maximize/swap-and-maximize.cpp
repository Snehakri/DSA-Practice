//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> ans(arr.size());
        int j=0;
        for(int i=0;i<arr.size();i+=2){
            ans[i]=arr[j];
            j++;
        }
        j=arr.size()-1;
        for(int i=1;i<arr.size();i+=2){
            ans[i]=arr[j];
            j--;
        }
        long long sum=0;
        for(int i=0;i<ans.size()-1;i++){
            // cout<<ans[i]<<endl;
            sum+=abs(ans[i]-ans[i+1]);
        }
        sum+=abs(ans[ans.size()-1]-ans[0]);
        return sum;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends