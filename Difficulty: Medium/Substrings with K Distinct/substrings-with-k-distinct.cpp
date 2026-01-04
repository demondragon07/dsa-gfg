class Solution {
  public:
   int atleast(string &s ,int k){
       int freq[26]={0};
       int n=s.length();
       int dc=0;
       int ans=0;
       int j=0;
       for(int i=0;i<n;i++){
           freq[s[i]-'a']++;
           if(freq[s[i]-'a']==1) dc++;
           while(k==dc){
               ans+=(n-i);
               freq[s[j]-'a']--;
               if(freq[s[j]-'a']==0)dc--;
               j++;
           }
       }
       return ans;
   }
    int countSubstr(string& s, int k) {
        return atleast(s,k)-atleast(s,k+1);
        
    }
};