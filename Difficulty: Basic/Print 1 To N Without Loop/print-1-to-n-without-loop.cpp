class Solution {
  public:
  void printnum(int i, int n){
      if(i>n)return;
      cout<<i<<" ";
      printnum(i+1,n);
     
  }
    void printNos(int n) {
       printnum(1,n);
    }
};