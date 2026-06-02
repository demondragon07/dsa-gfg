class Solution {
  public:
  void solve(int i , int j , int n, vector<string>&ans , string move, vector<vector<int>>& maze, vector<int>&di, vector<int>&dj
  ,vector<vector<int>>&vis){
      if(i==n-1 && j==n-1){
          ans.push_back(move);
          return;
      }
      string s="DLRU";
      for(int idx=0;idx<4;idx++){
          int new_i=i+di[idx];
          int new_j=j+dj[idx];
          if(new_i>=0 && new_j>=0 && new_i<n && new_j<n && !vis[new_i][new_j] && maze[new_i][new_j]){
              move.push_back(s[idx]);
              vis[i][j]=1;
              solve(new_i, new_j,n,ans,move,maze,di,dj,vis);
              move.pop_back();
              vis[i][j]=0;
          }
      }
  }
    vector<string>ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size();
        vector<string>ans;
        string move="";
        vector<vector<int>>vis(n,vector<int>(n,0));
        vector<int>di={1,0,0,-1};
        vector<int>dj={0,-1,1,0};
        if(maze[0][0]==1)solve(0,0,n,ans,move,maze,di,dj,vis);
        return ans;
    }
};