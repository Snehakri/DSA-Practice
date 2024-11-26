//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int total_sum=0;
        
        int maxi=arr[0];
        int ps=0;
        for(int i=0;i<arr.size();i++){
            ps+=arr[i];
            maxi=max(maxi,ps);
            if(ps<0) ps=0;
            total_sum+=arr[i];
            arr[i]*=-1;
        }
        int mini=arr[0];
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            mini=max(mini,sum);
            if(sum<0){
                sum=0;
            }
        }
       
        
        //cout<<total_sum<<" "<<mini<<" "<<maxi<<endl;
        return max(maxi,total_sum-(-mini));
        // your code here
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends