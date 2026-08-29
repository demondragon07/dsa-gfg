class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        int n=a.size();
         sort(a.begin(),a.end());
         sort(b.begin(),b.end());

         priority_queue<pair<int,pair<int,int>>>pq;
         set<pair<int,int>>visited;

         vector<int>ans;
         pq.push({a[n-1]+b[n-1],{n-1,n-1}});
         visited.insert({n-1,n-1});
         while(k-- && !pq.empty()){
             auto x=pq.top();
             pq.pop();
             int sum=x.first;
             int i=x.second.first;
             int j=x.second.second;
             ans.push_back(sum);

              if(i-1>=0 && visited.find({i-1,j})==visited.end()){
                  pq.push({a[i-1]+b[j],{i-1,j}});
                  visited.insert({i-1,j});
              }

              if(j-1>=0 && visited.find({i,j-1})==visited.end()){
                  pq.push({a[i]+b[j-1],{i,j-1}});
                  visited.insert({i,j-1});
              }
         }

        return ans;
    }
};