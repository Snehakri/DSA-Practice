//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
// class Solution {
//   public:
//     string armstrongNumber(int n) {
//         int m;
//         int temp=n;
//         while(n>0){
//             int r=n%10;
//             n/=10;
//             m+=(r*r*r);
//         }
//         //cout<<m;
//         if(temp==m) return "true";
//         return "false";
//         // code here
//     }
// };
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        string s=to_string(n);
        int l=s.size();
        int temp=n;
        int total=0;
        
        while(temp>0)
        {
            int rem=temp%10;
             
            int sum=pow(rem,l); 
            
            total+=sum;  
            temp=temp/10;
        }
         
           if( n == total)
           {
               return "true";
           }
          
        return "false";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends