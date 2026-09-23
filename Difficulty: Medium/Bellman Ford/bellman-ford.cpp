class Solution {
  public:
    void Bellman(vector<vector<int>>& edges,vector<int>&dist){
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            int w=x[2];
            if(dist[u]!=1e8)
            dist[v]=min(dist[v],dist[u]+w);
        }
    }
    
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<int>dist(V,1e8);
        dist[src]=0;
        for(int i=0;i<V-1;i++){
            Bellman(edges,dist);
        }
        vector<int>ans(V);
        for(int i=0;i<V;i++)ans[i]=dist[i];
        Bellman(edges,dist);
        
        for(int i=0;i<V;i++){
            if(dist[i]!=ans[i]){
                vector<int>result(1,-1);
                return result;
            }
        }
        
        return ans;
    }
};
