class Solution {
  public:
  void insertstack(stack<int>&st, int x){
      if(st.empty()){
          st.push(x);
          return;
      }
      int top=st.top();
      st.pop();
      insertstack(st,x);
      st.push(top);
  }
    void reverseStack(stack<int> &st) {
        if(st.empty()) return;
        int top=st.top();
        st.pop();
        reverseStack(st);
        insertstack(st,top);
    }
};