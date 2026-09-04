class Solution {
  public:
  bool check(int i , int j , int row , int col){
      return ((i>-1 && i<row) && (j>-1 && j<col));
  }
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int row[4]={-1,0,1,0};
        int col[4]={0,1,0,-1};
        vector<vector<int>>ans(n,vector<int>(m,0));
        int dist=0;
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)q.push({{i,j},dist});
            }
        }
        
        while(!q.empty()){
            int sz=q.size();
            dist=q.front().second;
            while(sz--){
            auto x=q.front();
            q.pop();
            int i=x.first.first;
            int j=x.first.second;
            ans[i][j]=dist;
            for(int k=0;k<4;k++){
                if(check(i+row[k],j+col[k],n,m) && grid[i+row[k]][j+col[k]]==0){
                    q.push({{i+row[k],j+col[k]},dist+1});
                    grid[i+row[k]][j+col[k]]=1;
                }
              }
            }
        }
        
        return ans;
    }
};