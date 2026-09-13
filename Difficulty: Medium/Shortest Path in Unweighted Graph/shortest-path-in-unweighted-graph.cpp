class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        vector<int>adj[V];
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(V,0);
        queue<pair<int,int>>q;
        int dist=0;
        q.push({src,dist});
        vis[src]=1;
        while(!q.empty()){
            auto x=q.front();
            int node=x.first;
            dist=x.second;
            if(node==dest) return dist;
            q.pop();
            for(int i=0;i<adj[node].size();i++){
                if(!vis[adj[node][i]]){
                    q.push({adj[node][i],dist+1});
                    vis[adj[node][i]]=1;
                }
            }
        }
        return -1;
    }
};
