class Solution {
  public:
   void solve(vector<string>&ans, string s,string temp, int i){
       if(i==s.size()){
           if(!temp.empty())ans.push_back(temp);
           return;
       }
       temp.push_back(s[i]);
       solve(ans,s,temp,i+1);
       temp.pop_back();
       solve(ans,s,temp,i+1);
   }
   static bool mysort(string a, string b){
       int n=min(a.size(),b.size());
       for(int i=0;i<n;i++){
           if(a[i]<b[i])return true;
           if(a[i]>b[i])return false;
       }
       return a.size()<b.size();
   }
    vector<string> AllPossibleStrings(string s) {
        vector<string>ans;
        int idx=0;
        string temp="";
        solve(ans,s,temp,idx);
        sort(ans.begin(),ans.end(),mysort);
        return ans;
    }
};