class Solution {
  public:
    bool isPowerofTwo(int n) {
      if (n==0) return false;
      else if((n&(n-1))==0)return true;
       return false;
    }
};