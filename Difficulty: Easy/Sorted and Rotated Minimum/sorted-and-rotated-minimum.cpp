//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class Solution {
//   public:
//     int findMin(vector<int>& arr) {
//         // complete the function here
        
//     }
// };
class Solution {
  public:
    int findMin(vector<int>& a) {
        int n=a.size(),ans=a[0];
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            ans=min(ans,a[mid]);
            if(a[mid]>=a[0]) l=mid+1;
            else r=mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends