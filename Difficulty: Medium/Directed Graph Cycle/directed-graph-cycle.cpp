class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<int>indeg(V,0);
        vector<int>adj[V];
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            indeg[v]++;
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indeg[i]==0)q.push(i);
        }
        
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            for(int i=0;i<adj[node].size();i++){
                indeg[adj[node][i]]--;
                if(indeg[adj[node][i]]==0)q.push(adj[node][i]);
            }
        }
        
        for(int i=0;i<V;i++){
            if(indeg[i]!=0)return true;  
        }
        return false;
        
        
    }
};