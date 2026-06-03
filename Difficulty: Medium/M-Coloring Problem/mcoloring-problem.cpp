class Solution {
  public:
 
  bool issafe(int node ,vector<vector<int>>&adj,int v,
  vector<int>&color,int col){
      for(int i=0;i<v;i++){
          if(i!=node && adj[node][i]==1 && color[i]==col)return false;
      }
     return true; 
  }
  bool solve(int n, int v,vector<vector<int>>&adj, int m,vector<int>&color){
      if(n==v)return true;
      for(int col=1;col<=m;col++){
          if(issafe(n,adj,v,color,col)){
              color[n]=col;
              if(solve(n+1,v,adj,m,color))return true;
              color[n]=0;
          }
      }
      return false;
  }
  
  bool graphColoring(int v, vector<vector<int>> &edges, int m) {
         int node=0;
         vector<int>color(v,0);
         vector<vector<int>>adj(v,vector<int>(v,0));
         for(auto &x:edges){
             int u=x[0];
             int w=x[1];
             adj[u][w]=1;
             adj[w][u]=1;
         }
         if(solve(node,v,adj,m,color))return true;
         return false;
    }
};