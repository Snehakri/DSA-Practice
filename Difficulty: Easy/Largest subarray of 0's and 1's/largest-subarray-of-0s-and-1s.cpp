//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        for(int i = 0 ; i < arr.size() ; i++) if(arr[i] == 0) arr[i] = -1 ;
        
        map<long long,int> mp;
        int sum = 0 ;
        int ans = 0 ;
        
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i] ;
            if(sum == 0) ans = max(ans , i + 1) ;
            
            if(mp.find(sum) != mp.end()){
                ans = max(ans , i - mp[sum]);
            }
            
            if(mp.find(sum) == mp.end()){
                mp[sum] = i ;
            }
        }
        
        return ans ;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line); // Read the whole line for the array

        // Convert the line into an array of integers
        stringstream ss(line);
        vector<int> a;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }

        // Create the solution object
        Solution obj;

        // Call the maxLen function and print the result
        cout << obj.maxLen(a) << endl;
    }

    return 0;
}
// } Driver Code Ends