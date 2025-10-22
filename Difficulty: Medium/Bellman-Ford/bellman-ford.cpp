// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        
        vector<int>result(V,1e8);
        result[src]=0;
        for(int i=1;i<V;i++){
            for(auto x:edges){
                int u=x[0];
                int v=x[1];
                int d=x[2];
                if(result[u]!=1e8 && d+result[u]<result[v]){
                    result[v]=result[u]+d;
                }
            }
        }
        
      for(auto x:edges){
          int u=x[0];
          int v=x[1];
          int d=x[2];
          if(result[u]!=1e8 && d+result[u]<result[v]){
              result[v]=result[u]+d;
              return {-1};
          }
      }
      
      return result;
        
    }
};
