class Solution {
  public:
    void toposort(int node, stack<int>&s, vector<bool>&visited, vector<int>adj[]){
        if(visited[node]) return;
        visited[node]=1;
        for(int i=0;i<adj[node].size();i++){
            if(!visited[adj[node][i]]){
                toposort(adj[node][i],s,visited,adj);
            }
        }
        s.push(node);
    }
    void DFS(int node, stack<int>&s ,vector<bool>&visited, vector<int>revadj[]){
          visited[node]=1;
          for(int i=0;i<revadj[node].size();i++){
              if(!visited[revadj[node][i]]){
                  DFS(revadj[node][i],s,visited,revadj);
              }
          }
    }
    
    int countSCC(int V, vector<vector<int>> &edges) {
        vector<int>adj[V];
        vector<int>revadj[V];
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            revadj[v].push_back(u);
        }
        
        stack<int>s;
        vector<bool>visited(V,0);
        for(int i=0;i<V;i++){
            if(!visited[i]) toposort(i,s,visited,adj);
        }
        
        for(int i=0;i<V;i++)visited[i]=0;
        
        int cnt=0;
        
        while(!s.empty()){
            int node=s.top();
            s.pop();
            if(!visited[node]){
                cnt++;
                DFS(node,s,visited,revadj);
            }
        }
        
        return cnt;
        
    }
};