//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void swap(vector<int>& arr, int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    void reverse(vector<int>& arr, int i, int j)
    {
        while(i < j) swap(arr, i++, j--);
    }
    
    void nextPermutation(vector<int>& arr) {
        int iter = arr.size()-1;
        while(iter > 0)
        {
            if(arr[iter] > arr[iter-1]) break;
            iter--;
        }
        
        if(iter == 0)
        {
            reverse(arr, 0, arr.size()-1);
        }
        else
        {
            int i = arr.size()-1;
            while(arr[i] <= arr[iter-1]) i--;
            swap(arr, i, iter-1);
            reverse(arr, iter, arr.size()-1);
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends