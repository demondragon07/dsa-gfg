class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end())mp[arr[i]]++;
            else mp[arr[i]]=1;
        }
        vector<vector<int>>ans;
        for(auto x:mp){
            ans.push_back({x.first,x.second});
        }
        
        return ans;
        
    }
};