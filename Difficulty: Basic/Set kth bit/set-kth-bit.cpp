class Solution {
  public:
    int setKthBit(int n, int k) {
         int i=1;
         int mask=1<<k;
         int ans=n;
         ans=ans|mask;
         
        return ans;
    }
};
