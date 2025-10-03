class Solution {
  public:
   void DFS(int u ,vector<vector<int>>&adj,vector<bool>&vis,vector<int>&result){
       if(vis[u]==true) return ;
       vis[u]=true;
       result.push_back(u);
       for(auto v:adj[u]){
           if(vis[v]!=true) DFS(v,adj,vis,result);
       }
   }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<bool>vis(n,false);
        vector<int>result;
        DFS(0,adj,vis,result);
        return result;
    }
};