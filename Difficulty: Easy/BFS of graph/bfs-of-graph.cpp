class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void BFS(int start, vector<vector<int>>&adj, vector<int>&result, vector<bool>&vis,queue<int>&q)
    {
        vis[start]=true;
        q.push(start);
        while(!q.empty()){
            int u=q.front();
            result.push_back(u);
            q.pop();
            for(auto v:adj[u]){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                  }
               }
            }
       }
       
    vector<int> bfs(vector<vector<int>> &adj) {
         vector<int>result;
         queue<int>q;
         int n=adj.size();
         vector<bool>vis(n,false);
        BFS(0,adj,result,vis,q);
        return result;
    }
};