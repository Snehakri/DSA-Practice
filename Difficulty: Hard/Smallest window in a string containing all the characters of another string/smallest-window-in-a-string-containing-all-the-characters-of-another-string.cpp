//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    string smallestWindow (string s, string p){
        if(p.length()>s.length()){
            return "-1";
        }

        unordered_map<char,bool> mp;
        
        int p_hash[26] = {0};
        
        for(int i=0;i<p.size();i++){
            p_hash[p[i]-'a']++;
            mp[p[i]] = true;
        }
        
        int count=mp.size();
        int startindex=-1;
        int length=0;
        int minlength=INT_MAX;
        
        int i = 0,j = 0;
        while(j < s.size()){
            if(mp[s[j]] == true){
                p_hash[s[j]-'a']--;
                if(p_hash[s[j]-'a'] == 0){
                    count--;
                }
            }
            
            
            while(count == 0){
                length = j-i+1;
                if(length < minlength){
                    startindex = i;
                    minlength = length;
                }
                
                if(mp[s[i]] == true){
                    p_hash[s[i]-'a']++;
                    if(p_hash[s[i]-'a'] > 0){
                        count++;
                    }
                }
                i++;
            }
            j++;
        }

        if(startindex == -1)
            return "-1";
        else
            return s.substr(startindex,minlength);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends