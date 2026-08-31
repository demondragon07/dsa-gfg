class Solution {
  public:
  void DFS(int node, vector<int>&visited, vector<vector<int>>&adj, vector<int>&ans){
      if(visited[node])return;
      ans.push_back(node);
      visited[node]=1;
      for(int i=0;i<adj[node].size();i++){
          DFS(adj[node][i],visited,adj,ans);
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int>ans;
        vector<int>visited(n,0);
        DFS(0,visited,adj,ans);
        return ans;
        
    }
};