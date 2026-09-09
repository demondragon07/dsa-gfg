class Solution {
  public:
  
    void DFS(int node, vector<int>&vis,vector<int>adj[],stack<int>&s){
        vis[node]=1;
        for(int i=0;i<adj[node].size();i++){
            if(!vis[adj[node][i]]) DFS(adj[node][i],vis,adj,s);
        }
        s.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<int>vis(V,0);
        vector<int>adj[V];
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            
            adj[u].push_back(v);
        }
        vector<int>ans;
        stack<int>s;
        for(int i=0;i<V;i++){
            if(!vis[i]) DFS(i,vis,adj,s);
        }
        
       while(!s.empty()){
           ans.push_back(s.top());
           s.pop();
       }
        return ans;
    }
};