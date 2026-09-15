class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        vector<int>weight(V, INT_MAX);
        vector<int>parent(V,-1);
        vector<int>visited(V,0);
        
        vector<pair<int,int>>adj[V];
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            int w=x[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
    
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   pq.push({0,0});
   
   int cost=0;
   int count=0;
   int node,w;
   while(!pq.empty()){
        node=pq.top().second;
        w=pq.top().first;
        pq.pop();
        if(count==V) break;
        if(visited[node]) continue;
        cost+=w;
        visited[node]=1;
        count++;
        for(int i=0;i<adj[node].size();i++){
            if(!visited[adj[node][i].first] && 
                adj[node][i].second<weight[adj[node][i].first]){
                    weight[adj[node][i].first]=adj[node][i].second;
                    parent[adj[node][i].first]=node;
                    pq.push({adj[node][i].second,adj[node][i].first});
                }
        }
      }
      return cost;
    }
};