class Solution {
  public:
    void replaceWithRank(vector<int>& arr) {
        // code here
        vector<int>v=arr;
        sort(v.begin(),v.end());
        unordered_map<int,vector<int>>mp;
        unordered_map<int,int>idx;
        for(int i=0;i<v.size();i++){
           mp[v[i]].push_back(i);
        }
        for(int i=0;i<arr.size();i++){
           int x=arr[i];
           arr[i]=mp[x][idx[x]];
           idx[x]++;
        }
    }
};