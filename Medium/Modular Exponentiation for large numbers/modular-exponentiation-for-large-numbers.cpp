//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    if (n == 0)
               return 1;
            if (n == 1)
               return x;
		   long long v= PowMod(x, n/2, M);
		    v=(v*v)%M;
		    
		    if(n%2==1){
		        return (v*x)%M;
		    }
		    
		    return v;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends