//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	   // set<char> s;
	   vector<char> v;
	    for(int i =0;i<str.size();i++){
	        if(find(v.begin(),v.end(),str[i])==v.end()){
	            v.push_back(str[i]);
	        }
            
	       // if(s.count(str[i])==0){
	       //     s.insert(str[i]);
	       // }
	    }
	    string ans;
	    for(auto i:v){
	        ans+=i;
	    }
	    return ans;
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends