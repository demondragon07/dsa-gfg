class Solution {
  public:
    int replaceBit(int n, int k) {
       int len=32-__builtin_clz(n);
       int K=len-k;
       return (n & ~(1<<K));
    }
};