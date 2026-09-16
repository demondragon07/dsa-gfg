class Solution {
  public:
  
     int findPar(int u ,vector<int>&parent){
         if(u==parent[u]) return u;
         return parent[u]=findPar(parent[u],parent);
     }
     
     bool DSU(int u ,int v, vector<int>&rank , vector<int>&parent){
         int pu=findPar(u,parent);
         int pv=findPar(v,parent);
         if(pv==pu) return 1;
         if(rank[pu]==rank[pv]){
             rank[pu]++;
             parent[pv]=pu;
         }
         else if(rank[pu]>rank[pv]){
             parent[pv]=pu;
         }
         else{
             parent[pu]=pv;
         }
        return 0;
     }
     
    int kruskalsMST(int V, vector<vector<int>> &edges) {
        vector<int>rank(V,0);
        vector<int>parent(V);
        for(int i=0;i<V;i++){
            parent[i]=i;
        }
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            int w=x[2];
            pq.push({w,{u,v}});
        }
        int count=0 , cost=0;
        while(!pq.empty()){
            if(count==V-1) break;
            int u=pq.top().second.first;
            int v=pq.top().second.second;
            int w=pq.top().first;
            pq.pop();
            if(DSU(u,v,rank,parent)) continue;
            count++;
            cost+=w;
        }
      return cost;
    }
};