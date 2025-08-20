class Solution {
  public:
    int longestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int cumsum=0;
        int ans=0;
        mp.insert({0,-1});
        for(int i=0;i<n;i++){
            cumsum+=nums[i];
            
            if(mp.find(cumsum-k)!=mp.end()){
                ans=max(ans,i-mp[cumsum-k]);
            }
            
            if(mp.find(cumsum)==mp.end()){
                mp[cumsum]=i;
            }
        }
        
        return ans;
        
    }
};