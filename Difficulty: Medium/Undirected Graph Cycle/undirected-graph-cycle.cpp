class Solution {
  public:

//   bool DFS(int u,unordered_map<int,vector<int>>&adj, vector<bool>&vis ,int parent)
//   {
//       vis[u]=true;
//       for(auto v:adj[u]){
//          if(v==parent)continue;
//          if(vis[v]==true) return true;
//          else {
//              if(DFS(v,adj,vis,u)==true) return true;
//          }
//       }
//      return false; 
//   }

bool BFS(int source, unordered_map<int,vector<int>>&adj, vector<bool>&vis)
{
    vis[source]=true;
    queue<pair<int,int>>q;
    q.push({source,-1});
    while(!q.empty()){
        pair<int,int>p=q.front();
        q.pop();
        int u=p.first;
        int parent=p.second;
        for(auto v:adj[u]){
            if(!vis[v]) {
                q.push({v,u});
                vis[v]=true;
            }
            else if(v!=parent) return true;
        }
    }
    return false;
}
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // For dfs
        //  vector<bool>vis(V,false);
        //  unordered_map<int,vector<int>>adj;
        //  for(auto x:edges){
        //      adj[x[0]].push_back(x[1]);
        //      adj[x[1]].push_back(x[0]);
        //  }
        //  for(int i=0;i<V;i++){
        //      if(!vis[i] && DFS(i,adj,vis,-1)==true){
        //          return true;
        //      }
        //  }
        // return false; 
        
        //For bfs
        vector<bool>vis(V,false);
        unordered_map<int,vector<int>>adj;
        
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
            if(BFS(i,adj,vis)==true) return true;
           }
        }
       return false; 
    }
};