//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int> ans;
            // int count=0;
            int n=text.size();
            int m=pattern.size();
            
            for(int i=0;i<n-m+1;i++){
                if(text.substr(i,m)==pattern){
                    ans.push_back(i+1);
                //   count++;
                }
            }
            // cout<<count;
            return ans;
            //code here.
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends