class Solution {
  public:
    string infixToPostfix(string& s) {
          map<char,int>mp;
          mp['^']=3;
          mp['*']=2;
          mp['/']=2;
          mp['+']=1;
          mp['-']=1;
          mp['(']=-1;
          mp[')']=-1;
          
          int n=s.size();
          int i=0;
          stack<char>st;
          string ans="";
          while(i<n){
              if((s[i]>='A' && s[i]<='Z') ||
                  (s[i]>='a' && s[i]<='z') ||
                  (s[i]>='0' && s[i] <='9')){
                      ans+=s[i];
                  }
              else{
                  if(st.empty() || s[i]=='(') st.push(s[i]);
                  else if(!st.empty() && s[i]==')'){
                      while(st.top()!='('){
                          ans+=st.top();
                          st.pop();
                      }
                      st.pop();
                  }
                  else{
                      while(!st.empty() && mp[s[i]]<=mp[st.top()] && s[i]!='^'){
                          ans+=st.top();
                          st.pop();
                      }
                      st.push(s[i]);
                  }
              }
              i++;
          }
          
          while(!st.empty()){
              ans+=st.top();
              st.pop();
          }
          
         return ans; 
    }
};
