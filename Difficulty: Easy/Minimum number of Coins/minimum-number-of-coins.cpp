class Solution {
  public:
    int findMin(int n) {
        int ans=0;
        vector<int>curr={1,2,5,10};
        for(int i=3;i>=0;i--){
            while(n>=curr[i]){
                n-=curr[i];
                ans++;
            }
            if(n<=0)break;
        }
        return ans;
    }
};