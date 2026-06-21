class Solution {
  public:
    string infixToPrefix(string &s) {
      reverse(s.begin(),s.end());
      int i=0;
      stack<char>st;
      map<char,int>mp;
      mp['^']=3;
      mp['/']=2;
      mp['*']=2;
      mp['+']=1;
      mp['-']=1;
      mp['(']=-1;
      mp[')']=-1;
      
      int n=s.size();
      string ans="";
      while(i<n){
          if((s[i]>='A' && s[i]<='Z')
          || (s[i]>='a' && s[i]<='z')
          || (s[i]>='0' && s[i]<='9'))ans+=s[i];
          else if(s[i]==')') st.push(s[i]);
          else if(!st.empty() && s[i]=='('){
              while(st.top()!=')'){
                  ans+=st.top();
                  st.pop();
              }
              st.pop();
          }
          else{
              if(s[i]=='^'){
                  while(!st.empty() && mp[s[i]]<=mp[st.top()]){
                      ans+=st.top();
                      st.pop();
                  }
              }
              else{
                while(!st.empty() && mp[s[i]]<mp[st.top()]){
                  ans+=st.top();
                  st.pop();
                 }
              }
              st.push(s[i]);
          }
          i++;
      }
      
      while(!st.empty()){
          ans+=st.top();
          st.pop();
      }
      
       reverse(ans.begin(),ans.end());
       return ans;
    }
};
