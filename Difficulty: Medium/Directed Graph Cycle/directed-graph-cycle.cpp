class Solution {
  public:
  
    // bool DFS(int u,unordered_map<int,vector<int>>&adj,vector<bool>&vis,vector<bool>&inrec){
    //     vis[u]=true;
    //     inrec[u]=true;
        
    //     for(auto v:adj[u]){
    //         if(vis[v]==false && DFS(v,adj,vis,inrec)) return true;
    //         else if(inrec[v]==true) return true;
    //     }
        
    //     inrec[u]=false;
    //     return false;
    // }
    
    
    bool isCyclic(int V, vector<vector<int>>&edges) {
        // vector<bool>vis(V,false);
        // vector<bool>inrec(V,false);
        //  unordered_map<int,vector<int>>adj;
        //  for(auto x:edges){
        //      int u=x[0];
        //      int v=x[1];
        //      adj[u].push_back(v);
        //  }
        // for(int i=0;i<V;i++){
        //     if(!vis[i] && DFS(i,adj,vis,inrec)) 
        //       return true;
        // }
        // return false;
        
        //BFS---
        
        unordered_map<int,vector<int>>adj;
        vector<int>indegree(V,0);
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        
       queue<int>q;
       for(int i=0;i<V;i++){
          if(indegree[i]==0) q.push(i);
       }
       vector<int>result;
       while(!q.empty()){
           int u=q.front();
           result.push_back(u);
           q.pop();
           for(auto v:adj[u]){
               indegree[v]--;
               if(indegree[v]==0) q.push(v);
           }
       }
        
        if(result.size()==V) return false;
        else return true;
        
    }
};