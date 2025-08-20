class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        mp.insert({0,-1});
        int cumsum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            cumsum+=arr[i];
            if(mp.find(cumsum)!=mp.end()){
                ans=max(ans,i-mp[cumsum]);
            }
            if(mp.find(cumsum)==mp.end()){
                mp[cumsum]=i;
            }
        }
        return ans;
    }
};