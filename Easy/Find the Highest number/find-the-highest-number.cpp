//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {

        int i=0,j=a.size()-1;
        int ans=-1;
        while(i<=j){
            if(i==j){
                ans=a[i];
                break;
            }
            int mid=(i+j)/2;
            if(a[mid+1]>a[mid]){
                i=mid+1;
            }
            else if(a[mid-1]>a[mid]) j=mid-1;
            else if(a[mid-1]<a[mid] && a[mid+1]<a[mid]){
                ans=a[mid];
                break;
            }
        }
        return ans;
        // Code here.
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends