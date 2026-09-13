class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
     vector<int>dist(V,-1);
              int n=edges.size();
              int m=edges[0].size();
              vector<pair<int,int>>adj[V];
              for(auto x:edges){
                  int u=x[0];
                  int v=x[1];
                  int dist=x[2];
                  adj[u].push_back({v,dist});
                  adj[v].push_back({u,dist});
              }

              priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
              pq.push({0,src});
              while(!pq.empty()){
                  auto x=pq.top();
                  pq.pop();
                  int node=x.second;
                  int step=x.first;
                  if(dist[node]!=-1) continue;
                  dist[node]=step;
                  for(int i=0;i<adj[node].size();i++){
                      if(dist[adj[node][i].first]==-1){
                          pq.push({step+adj[node][i].second,adj[node][i].first});
                      }
                  }
              }
              
              return dist;
        
    }
};