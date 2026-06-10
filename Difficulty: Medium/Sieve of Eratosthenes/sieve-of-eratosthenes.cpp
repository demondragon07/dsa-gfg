class Solution {
  public:
    vector<int> sieve(int n) {
       vector<int>sievve(n+1);
       vector<int>ans;
       for(int i=1;i<n+1;i++){
           sievve[i]=1;
       }
       
       for(int i=2;i<=n;i++){
           for(int j=2*i;j<=n;j+=i){
               sievve[j]=0;
           }
       }
       
       for(int i=2;i<=n;i++){
           if(sievve[i]==1)ans.push_back(i);
       }
       return ans;
    }
};