class Solution {
  public:
    bool DFS(int node , int target, vector<int>adj[], vector<bool>&visited){
        if(node==target)return true;
        visited[node]=1;
        for(int i=0;i<adj[node].size();i++){
            if(!visited[adj[node][i]]){
                if(DFS(adj[node][i],target,adj,visited)) return true;
            }    
        }
    return false;    
    }
    
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
         vector<int>adj[V];
         for(auto x:edges){
             int u=x[0];
             int v=x[1];
             adj[u].push_back(v);
             adj[v].push_back(u);
         }
         
         for(int i=0;i<adj[c].size();i++){
             if(adj[c][i]==d){
                 adj[c][i]=c;
                 break;
             }
         }
         
         for(int i=0;i<adj[d].size();i++){
             if(adj[d][i]==c){
                 adj[d][i]=d;
                 break;
             }
         }
        vector<bool>visited(V,0);
         return !DFS(c,d,adj,visited);
    }
};