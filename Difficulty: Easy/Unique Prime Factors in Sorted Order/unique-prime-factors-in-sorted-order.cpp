class Solution {
  public:
   bool prime(int n){
      int cnt=0;
      for(int i=1;i*i<=n;i++){
          if(n%i==0){
              cnt++;
              if(n/i!=i)cnt++;
          }
      }
      return cnt==2;
  }
  
    vector<int> primeFac(int n) {
          vector<int>ans;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(prime(i))ans.push_back(i);
                if(n/i!=i & prime(n/i))ans.push_back(n/i);
            }
        }
        return ans;
    }
};