//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// class Solution{
//   public:
//     char nthCharacter(string s, int r, int n) {
//         string v;
//         char var='-1';
//         while(r!=0){
//             for(int i=0;i<s.length();i++){
//                 if(s[i]=='0'){
//                     v.push_back('0');
//                     v.push_back('1');
//                 }
//                 else if(s[i]=='1'){
//                     v.push_back('1');
//                     v.push_back('0');
//                 }
//             }
//             // for(int i=0;i<v.size();i++){
//             //     cout<<v[i]<<" ";
//             // }
//             // cout<<"end";
//             if(v.size()>n){
//                 var=v[n];
//             }
//             for(int i=0;i<v.size();i++){
//                 s[i]=v[i];
//             }
//             v.clear();
//             r--;
//         }
//         // for(int i=0;i<v.size();i++){
//         //     cout<<v[i]<<" ";
//         // }
//         // char var=v[n];
//         // cout<<"output";
//         // cout<<v[n]-'0';
//         return var;
//         //code here
//     }
// };
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        if(r==0) return s[n];
        
        char c= nthCharacter(s, r-1, n/2);
        
        if(n%2==1){
            // odd case
            if(c=='0'){
                // 0 1
                return '1';
            }
            else{
                return '0';
            }
        }
        else{
            // even case
            if(c=='0'){
                // 0 1
                return '0';
            }
            else{
                return '1';
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends