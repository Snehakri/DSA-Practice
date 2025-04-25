//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        int el=arr[0], cnt=1;
        
        for(int i=1; i<n; i++){
            if(arr[i]==el) cnt++;
            else{
                cnt--;
                if(cnt==0){
                    el=arr[i];
                    cnt=1;
                }
            }
        }
        cnt=0;
        
        for(int i=0; i<n; i++){
            if(el==arr[i]) cnt++;
        }
        
        if(cnt>n/2) return el;
        else return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends