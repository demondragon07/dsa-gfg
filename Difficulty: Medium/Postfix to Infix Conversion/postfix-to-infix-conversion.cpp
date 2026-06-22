class Solution {
  public:
    string postToInfix(string &exp) {
        int i=0;
        int n=exp.size();
        stack<string>st;
        while(i<n){
            if((exp[i]>='A' && exp[i]<='Z') ||
              (exp[i]>='a' && exp[i]<='z') || 
              (exp[i]>='0' && exp[i]<='9'))st.push(string(1,exp[i])); 
            else {
                string t2=st.top();
                st.pop();
                string t1=st.top();
                st.pop();
                string ans="("+t1+exp[i]+t2+")";
                st.push(ans);
            }
            i++;
        }
        return st.top();
    }
};