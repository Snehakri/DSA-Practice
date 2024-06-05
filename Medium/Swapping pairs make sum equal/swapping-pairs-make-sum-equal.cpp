//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++) sum1+=a[i];
        for(int i=0;i<m;i++) sum2+=b[i];
        
        if((sum1-sum2)%2!=0) return -1;
        int target=((sum1-sum2)/2);
        int i=0,j=0;
        sort(a,a+n);
        sort(b,b+m);
        while(i<n && j<m){
            int dif=a[i]-b[j];
            if(dif==target) return 1;
            else if(dif<target) i++;
            else j++;
            
        }
        return -1;
        // Your code goes here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends