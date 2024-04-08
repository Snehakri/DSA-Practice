//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long solve(int arr[],int l,int r,vector<vector<long long>>&dp){
        if(l>r) return 0;
        if(l==r) return arr[l];
        if(dp[l][r]!=-1) return dp[l][r];
        
        long long left=arr[l]+min(solve(arr,l+2,r,dp),solve(arr,l+1,r-1,dp));
        long long right=arr[r]+min(solve(arr,l,r-2,dp),solve(arr,l+1,r-1,dp));
        
        return dp[l][r]=max(left,right);
    }
    long long maximumAmount(int n, int arr[]){
        vector<vector<long long>> dp(n+1,vector<long long>(n+1,-1));
        long long ans=solve(arr,0,n-1,dp);
        return ans;
        // Your code here
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
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends