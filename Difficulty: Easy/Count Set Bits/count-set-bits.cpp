class Solution {
  public:
    int setBits(int n) {
       return __builtin_popcount(n);
        
    }
};