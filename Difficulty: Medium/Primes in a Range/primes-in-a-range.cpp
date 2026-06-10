class Solution {
  public:
    vector<int> primeRange(int l, int r) {
        vector<int>sieve(r+1);
        for(int i=2;i<r+1;i++){
            sieve[i]=1;
        }
        
        for(int i=2;i<r+1;i++){
            if(sieve[i]){
                for(int j=2*i;j<r+1;j+=i){
                    sieve[j]=0;
                }
            }
        }
        vector<int>ans;
        for(int i=l;i<=r;i++){
            if(sieve[i])ans.push_back(i);
        }
        return ans;
    }
};