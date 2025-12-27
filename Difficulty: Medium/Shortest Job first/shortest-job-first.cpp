// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        long long t=0;
        long long wt=0;
        long long n=bt.size();
        sort(bt.begin(),bt.end());
        for(long long i=0;i<n;i++){
            wt+=t;
            t+=bt[i];
        }
        return wt/n;
    }
};