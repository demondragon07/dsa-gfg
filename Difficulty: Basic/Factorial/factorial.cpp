class Solution {
  public:
  int fact(int n, int ans){
      if(n==0)return ans;
      ans*=n;
     return fact(n-1,ans);
  }
    int factorial(int n) {
      return fact(n,1); 
    }
};