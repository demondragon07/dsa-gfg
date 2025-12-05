class Solution {
  public:
    int solve(vector<int>&height,int i,vector<int>&dp){
        if(i==0) return 0;
        if(dp[i]!=-1) return dp[i];
        int onestair=INT_MAX;
        int secondstair=INT_MAX;
        if(i-1>=0) onestair=abs(height[i]-height[i-1])+solve(height,i-1,dp);
        if(i-2>=0) secondstair=abs(height[i]-height[i-2])+solve(height,i-2,dp);
        return dp[i]=min(onestair,secondstair);    
    } 
  
    int minCost(vector<int>& height) {
        int n=height.size();
        vector<int>dp(n,-1);
        return solve(height,n-1,dp);
    }
};