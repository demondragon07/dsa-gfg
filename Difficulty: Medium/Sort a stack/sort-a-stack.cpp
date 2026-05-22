class Solution {
  public:
    void insertedsortstak(stack<int>&st, int x){
        if(st.empty() || st.top()<=x){
            st.push(x);
             return;
        }
        int top=st.top();
        st.pop();
        insertedsortstak(st,x);
        st.push(top);
    }
    void sortStack(stack<int> &st) {
        if(st.empty()) return;
        int top=st.top();
        st.pop();
        sortStack(st);
      insertedsortstak(st, top);    
    }
};
