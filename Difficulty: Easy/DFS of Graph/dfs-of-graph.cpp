class Solution {
  public:
   void dfs(vector<vector<int>>& adj,int u, vector<bool>&vis,vector<int>&result){
        if(vis[u]==true) return;
        vis[u]=true;
        result.push_back(u);
        for(auto &v:adj[u]){
            if(!vis[v]) dfs(adj,v,vis,result);
        }
   }
   
    vector<int> dfs(vector<vector<int>>& adj) {
     int n=adj.size();
     vector<bool>visited(n,false);
     vector<int>res;
     dfs(adj,0,visited,res);
      return res;  
    }
};