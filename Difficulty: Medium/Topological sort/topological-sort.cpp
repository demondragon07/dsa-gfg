class Solution {
  public:
  
  void DFS(int u,unordered_map<int,vector<int>>&adj,vector<bool>&vis,stack<int>&s){
         vis[u]=true;
         for(auto v:adj[u]){
             if(!vis[v]) DFS(v,adj,vis,s);
         }
         s.push(u);
     }

    vector<int> topoSort(int V, vector<vector<int>>& edges) {
       unordered_map<int,vector<int>>adj;
       stack<int>s;
       vector<bool>vis(V,false);
       for(auto x:edges){
           int u=x[0];
           int v=x[1];
           adj[u].push_back(v);
       }
       
       for(int i=0;i<V;i++){
           if(!vis[i]) DFS(i,adj,vis,s);
       }
       
       vector<int>res;
       while(!s.empty()){
           res.push_back(s.top());
           s.pop();
       }
      
      return res;
    }
};