//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    map<char,int>  m;
	    for(int i=0;i<s.length();i++){
	        m[s[i]]++;
	    }
	    
	    vector<int> v ;
	    
	    for (auto& it : m) { 
            v.push_back(it.second); 
        } 
	    sort(v.begin(),v.end());
	    int count=0;
	    int min_v=v[0];
	    int i=0;
	    if(v[0]==1 && v[1]!=1){
	        i=1;
	         min_v=v[1];
	         count=1;
	    } 
	    
	   // cout<<min_v<<"min_v";
	    
	   while(i<v.size() && v[i]==min_v){
	       i++;
	   }
	   if(i==v.size()) return true;
	   if(i==v.size()-1 && v[i]==min_v+1 && count!=1) return true;
	   return false;
	   // for(auto i:v){
	   //     if(i.second!=min_v){
	   //         if(i.second==1 || i.second==0 || i.second==min_v+1){
	   //             count++;
	   //         }
	   //         else return 0;
	   //        // min_v=i.second;
	   //     }
	   //    // if(count==1) return 0;
	   // }
	   // cout<<"done";
	   // cout<<count<<"count";
	   // if(count<=1) return 1;
	   // return 0;
		    // code here 
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends