class Solution {
  public:
    int longestKSubstr(string &s, int k) {
       int n=s.size();
       int l=0;
       int r=0;
       unordered_map<char,int>mp;
       int ans=-1;
       int maxlen=0;
       while(r<n){
           mp[s[r]]++;
           if(mp.size()<k) maxlen=max(maxlen,r-l+1);
           else if(mp.size()==k) {
               maxlen=max(maxlen,r-l+1);
               ans=max(maxlen,ans);
           }
           else if(mp.size()>k){
               mp[s[l]]--;
               if(mp[s[l]]==0)mp.erase(s[l]);
               l++;
           }
          r++; 
       }
    return ans;    
    }
};