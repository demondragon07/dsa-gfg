class Solution {
  public:
    string preToInfix(string s) {
           stack<string>st;
           int n=s.size();
           int i=n-1;
           while(i>=0){
               if(isalnum(s[i])) st.push(string(1,s[i]));
               else{
                   string t1=st.top();
                   st.pop();
                   string t2=st.top();
                   st.pop();
                   string ans="("+t1+s[i]+t2+")";
                   st.push(ans);
               }
               i--;
           }
           return st.top();
    }
};