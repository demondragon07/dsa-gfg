class Solution {
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
         unordered_map<int,vector<int>>adj;
         for(auto x:edges){
             adj[x[0]].push_back(x[1]);
             adj[x[1]].push_back(x[0]);
         }
        queue<int>q;
        q.push(0);
        vector<int>color(V,-1);
        //Green=0;
        //Red=1;
        color[0]=1;
        while(!q.empty()){
            int u=q.front();
           q.pop();
            for(auto v:adj[u]){
                if(color[v]==color[u]) return false;
                if(color[v]==-1){
                     color[v]=1-color[u];
                     q.push(v);
                }
            }
            
        }
        return true;
    }
};