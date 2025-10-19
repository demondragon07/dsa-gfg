class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
      unordered_map<int,vector<pair<int,int>>>adj;
      for(auto x:edges){
          adj[x[0]].push_back({x[1],x[2]});
          adj[x[1]].push_back({x[0],x[2]});
      }
      
      vector<int>result(n+1,INT_MAX);
      vector<int>parent(n+1);
      for(int i=0;i<=n;i++){
          parent[i]=i;
      }
      
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,1});
        result[1]=0;
        parent[1]=1;
        while(!pq.empty()){
            pair<int,int>p=pq.top();
            int u=p.second;
            int dist=p.first;
            pq.pop();
            for(auto v:adj[u]){
                int node=v.first;
                int d=v.second;
                if(d+dist<result[node]){
                    result[node]=d+dist;
                    pq.push({d+dist,node});
                    parent[node]=u;
                }
            }
        }
        vector<int>ans;
        
        if(result[n]==INT_MAX) return {-1};
        int dest=n;
        while(parent[dest]!=dest){
            ans.push_back(dest);
            dest=parent[dest];
        }
        ans.push_back(1);
        ans.push_back(result[n]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};