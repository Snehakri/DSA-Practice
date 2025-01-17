//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> res;
        
        int count=0; 
        int mul=1;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
                continue;
            }
            mul*=arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=0 && count==0){
                int num=mul/arr[i];
                res.push_back(num);
            }
            else if(arr[i]==0 && count==1){
                res.push_back(mul);
            }
            else res.push_back(0);
        }
        return res;
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends