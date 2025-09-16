class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(vector<vector<int>> &adj ,int u, vector<bool>&vis, vector<int>&result){
         queue<int>q;
         q.push(u);
         vis[u]=true;
         while(!q.empty()){
             int u=q.front();
             q.pop();
             result.push_back(u);
             for(auto v:adj[u]){
                 if(!vis[v]) {
                     vis[v]=true;
                     q.push(v);
                 }
             }
         }
    }
    vector<int> bfs(vector<vector<int>> &adj) {
      int n=adj.size();
      vector<bool>visited(n,false);
      vector<int>result;
      bfs(adj,0,visited,result);
    return result;    
    }
};