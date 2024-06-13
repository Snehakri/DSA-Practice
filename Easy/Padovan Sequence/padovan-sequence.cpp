//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
        int mod=1e9+7;
        int first=1;
        int mid=1;
        int last=1;
        for(int i=3;i<=n;i++){
            int some=first%mod+mid%mod;
            first=mid;
            mid=last;
            last=some;
        }
        
        return last%mod;
       //code here
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends