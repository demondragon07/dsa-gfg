class Solution {
  public:
    int toggleBits(int n, int l, int r) {
        int L=l-1;
        int R=r-1;
        for(int i=L;i<=R;i++){
            n=n^(1<<i);
        }
        return n;
    }
};