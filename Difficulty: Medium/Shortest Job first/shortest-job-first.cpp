// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        long long n=bt.size();
        vector<long long>ct(n);
        sort(bt.begin(),bt.end());
        ct[0]=bt[0];
        for(long long i=1;i<n;i++){
            ct[i]=ct[i-1]+bt[i];
        }
        vector<long long>wt(n);
        for(long long i=0;i<n;i++){
            wt[i]=ct[i]-bt[i];
        }
        long long sum=accumulate(wt.begin(),wt.end(),0);
        long long waitingt=sum/n;
        return waitingt;
    }
};