class Solution {
    
    void solve(vector<int>adj[],int &farthestnode,int dis,int &maxdis,int i,vector<bool>&vis){
        
        
        vis[i]=true;
        
        
        if(dis>maxdis){
            
            maxdis=dis;
            
            farthestnode=i;
        }
        
        for(auto it:adj[i]){
            
            if(!vis[it]){
                
                solve(adj,farthestnode,dis+1,maxdis,it,vis);
                
            }
        }
        
    }
    
     
    int solve2(vector<int>adj[],int farthestnode,int maxdis,vector<bool>&vis){
        
        
        vis[farthestnode]=true;
        
        int ans=0;
        
        for(auto it:adj[farthestnode]){
            
            if(!vis[it]){
                
               ans=max(ans,1+solve2(adj,it,maxdis,vis));
                
            
            }
        }
        return ans;
        
    }
  public:
    int diameter(int V, vector<vector<int>>& edges) {
           
           
           vector<int>adj[V];
           
           for(auto it:edges){
               
               int u=it[0];
               int v=it[1];
               
               adj[v].push_back(u);
               adj[u].push_back(v);
           }
           
           int farthestnode=0;
           int maxdis=-1;
           int dis=0;
           
           
           vector<bool>vis(V,false);
           solve(adj,farthestnode,dis,maxdis,0,vis);
           
           
           vis.assign(V,false);
           
          return solve2(adj,farthestnode,maxdis,vis);
                      
                      
    }
};