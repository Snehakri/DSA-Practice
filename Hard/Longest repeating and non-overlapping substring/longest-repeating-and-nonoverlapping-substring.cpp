//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// class Solution {
//   public:
//     string longestSubstring(string s, int n) {
//         int mid=n/2;
        // int j=0;
        // while(mid>0){
        //     for(int j=mid;j<n;j++){
        //         string new_s=s.substr(j,mid);
                
        //         for(int i=mid;i<n-mid+1;i++){
        //             if(s.substr(i,mid)==new_s){
        //                 return new_s;
        //             }
        //         }
        //         mid--;
        //     }
        // }
        // code here
//     }
// };
class Solution {
  public:
    string longestSubstring(string s, int n) {
        vector<vector<int>> dp(n+1,vector<int> (n+1,0));
        int index=0;
        int length=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(j-i>dp[i-1][j-1] && s[i-1]==s[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    if(dp[i][j]>length){
                        length=dp[i][j];
                        index=max(i,index);
                    }
                }
                else dp[i][j]=0;
            }
        }
        string new_s="";
        if(length>0){
            for(int i=index-length+1;i<=index;i++){
                new_s+=s[i-1];
            }
        }
        if(new_s==""){
            new_s= "-1";
        }
        return new_s;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends