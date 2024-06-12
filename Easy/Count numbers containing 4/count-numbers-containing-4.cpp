//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countNumberswith4(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            int m=i;
            while(m>0){
                int r=m%10;
                if(r==4){
                    count++;
                    break;
                }
                m=m/10;
            }
        }
        return count;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends