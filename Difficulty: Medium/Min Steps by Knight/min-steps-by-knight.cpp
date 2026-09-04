class Solution {
  public:
  bool check(int i, int j ,int row ,int col){
      return ((i>0 && i<=row) && (j>0 && j<=col));
  }
    int minStepToReachTarget(vector<int>& k, vector<int>& t, int n) {
       queue<pair<pair<int,int>,int>>q;
       int dist=0;
       vector<vector<int>>vis(n+1,vector<int>(n+1,0));
       q.push({{k[0],k[1]},dist});
       vis[k[0]][k[1]]=1;
       int row[8]={-1,1,-1,1,-2,-2,2,2};
       int col[8]={-2,-2,2,2,-1,1,-1,1};
       
       while(!q.empty()){
           int sz=q.size();
           dist=q.front().second;
           while(sz--){
               auto x=q.front();
               int i=x.first.first;
               int j=x.first.second;
               if(t[0]==i && t[1]==j) return dist;
               q.pop();
               for(int a=0;a<8;a++){
                   if(check(i+row[a],j+col[a],n,n) && vis[i+row[a]][j+col[a]]==0){
                       q.push({{i+row[a],j+col[a]},dist+1});
                       vis[i+row[a]][j+col[a]]=1;
                   }
                  }
                 }
                }
       return -1;
    }
};