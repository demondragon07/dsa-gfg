// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
      unordered_map<int,vector<pair<int,int>>>adj;
      for(auto x:edges){
          adj[x[0]].push_back({x[1],x[2]});
          adj[x[1]].push_back({x[0],x[2]});
      }
      vector<int>result(V,INT_MAX);
       result[src]=0;
       set<pair<int,int>>s;
       s.insert({0,src});
       while(!s.empty()){
           pair<int,int>p=*s.begin();
           int d=p.first;
           int u=p.second;
           s.erase({d,u});
           for(auto v:adj[u]){
               int node=v.first;
               int dist=v.second;
               if(d+dist<result[node]){
                if(d+dist!=INT_MAX) s.erase({result[node],node});
                   result[node]=d+dist;
                   s.insert({d+dist,node});
               }
           }
       }
      return result;
    }
};