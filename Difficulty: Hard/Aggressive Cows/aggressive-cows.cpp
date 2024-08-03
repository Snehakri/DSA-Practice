//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool ispossible(vector<int> &stalls,int k,int mid){
        int count=1,last=stalls[0];
        for(int i=1;i<stalls.size();i++){
            if((stalls[i]-last)>=mid){
                count++;
                last=stalls[i];
            }
        }
        if(count>=k) return true;
        else return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high=stalls[n-1]-stalls[0];
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(ispossible(stalls,k,mid)){
                low=mid+1;
            }
            else high=mid-1;
        }
        return high;
        // Write your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends