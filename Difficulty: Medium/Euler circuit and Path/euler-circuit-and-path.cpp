class Solution {
  public:
  void dfs(int u , vector<int>adj[],vector<bool>&vis){
      if(vis[u]==true) return;
      vis[u]=true;
      for(auto v:adj[u]){
          if(!vis[v]) dfs(v,adj,vis);
      }
  }
  
  bool isConnected(int V, vector<int>adj[]){
      int startingindex=-1;
      for(int i=0;i<V;i++){
          if(adj[i].size()!=0){
              startingindex=i;
              break;
          }
      }
      vector<bool>vis(V,false);
      if (startingindex!=-1) dfs(startingindex,adj,vis);
      for(int i=0;i<V;i++){
          if(adj[i].size()!=0 && vis[i]==false) return false;
      }
      return true;
  }
  
  int isEulerCircuit(int V, vector<int> adj[]) {
      if(isConnected(V,adj)==false){
            return 0;
        }
      int isoddcount=0;
      for(int i=0;i<V;i++){
          if(adj[i].size()%2!=0) isoddcount++;
      }
      if(isoddcount==2) return 1;
      if(isoddcount>2) return 0;
      if(isoddcount==0) return 2;
    }
};