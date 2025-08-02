class Solution {
  public:
    int powMod(int x, int n, int M) {
     long long int ans=1;
     long long int a=x;
     long long int b=n;
      while(b>0){
          if(b&1) 
          ans=(ans*a)%M;
          a=(a*a)%M;
         b>>=1;
      }
      return (int)ans%M;
    }
};