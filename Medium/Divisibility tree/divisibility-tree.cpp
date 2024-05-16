//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int ans=0;
    int dfs(int v,vector<bool>&vis,vector<vector<int>>&adj){
        int count=1;
        int res=0;
        vis[v]=true;
        for(auto u:adj[v]){
            if(!vis[u]){
                res=dfs(u,vis,adj);
                if(res%2==0) ans++;
                else {
                    // cout<<count<<" .";
                    count+=res;
                }
            }
        }
        return count;
        
    }
	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    vector<vector<int>> adj(n+1);
	    vector<bool> vis(n+1,false);
	    for(auto i:edges){
	        adj[i[0]].push_back(i[1]);
	        adj[i[1]].push_back(i[0]);
	    }
	    dfs(1,vis,adj);
	    return ans;
	    // Code here
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>edges;
		for(int i = 0; i < n-1; i++){
			int x, y;
			cin >> x >> y;
			edges.push_back({x,y});
		}
		Solution obj;
		int ans = obj.minimumEdgeRemove(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}

// } Driver Code Ends