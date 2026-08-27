class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto x:arr)pq.push(x);
        int ans=0;
        while(pq.size()>1){
            int x1=pq.top();
            pq.pop();
            int x2=pq.top();
            pq.pop();
            int sum=x1+x2;
            ans+=sum;
            pq.push(sum);
        }
        return ans;
        
    }
};