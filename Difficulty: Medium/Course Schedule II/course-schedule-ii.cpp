class Solution {
  public:
    vector<vector<int>> getadj(int V, vector<vector<int>>& edges){
        vector<vector<int>> adj(V);
        for(vector<int> &edge: edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
        }
        return adj;
    }
    vector<int> getarr(int V, vector<vector<int>> &adj){
        vector<int> innodes(V);
        for(vector<int> &neighs: adj){
            for(int n: neighs){
                innodes[n]++;
            }
        }
        return innodes;
    }
    vector<int> gettoposort(int V,vector<vector<int>> &adj, vector<int> &innodes)
    {
        vector<int> topo;
        queue<int> q;
        for(int i = 0;i<V;i++)if(innodes[i] == 0)q.push(i);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int node = q.front();
                q.pop();
                topo.push_back(node);
                for(int neigh: adj[node]){
                    innodes[neigh]--;
                    if(innodes[neigh] == 0)q.push(neigh);
                }
            }
        }
        return topo;
    }
    vector<int> findOrder(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj = getadj(V, edges);
        vector<int> innodes = getarr(V, adj);
        vector<int> topo = gettoposort(V, adj, innodes);
        reverse(topo.begin(), topo.end());
        return topo;
    }
};