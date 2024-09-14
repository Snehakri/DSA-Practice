//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    void rearrange(vector<int> &arr) {
        vector<int> positive;
        vector<int> negative;
        
        for(int i=0; i< arr.size();  i++){
            if(arr[i]>=0){
                positive.push_back(arr[i]);
            }
            else{
                negative.push_back(arr[i]);
            }
        }
        
             int i = 0, j = 0, k = 0;

        // Alternate placing positive and negative numbers in the array
        while (i < positive.size() && j < negative.size()) {
            if (k % 2 == 0) {  // Place positive number at even index
                arr[k++] = positive[i++];
            } else {            // Place negative number at odd index
                arr[k++] = negative[j++];
            }
        }

        // Add remaining positive numbers if any
        while (i < positive.size()) {
            arr[k++] = positive[i++];
        }

        // Add remaining negative numbers if any
        while (j < negative.size()) {
            arr[k++] = negative[j++];
        }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends