class Solution {
  public:
    bool checkKthBit(int n, int k) {
        if((n &(1<<k))) return true;
        return false;
        
    }
};