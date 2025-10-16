// User Function Template
class Solution {
  public:
  vector<int> dijkstra(int V, vector<vector<int>> &edges, int src){
        unordered_map<int,vector<pair<int,int>>>adj;
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            int w=x[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
       vector<int>result(V,INT_MAX);
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       result[src]=0;
       pq.push({0,src});
       while(!pq.empty()){
           pair<int,int>a=pq.top();
           pq.pop();
           int u=a.second;
           int dist=a.first;
           for(auto v:adj[u]){
               int node=v.first;
               int d=v.second;
               if(d+dist<result[node]){
                   result[node]=d+dist;
                   pq.push({d+dist,node});
               }
           }
       }
       return result;
    }
};