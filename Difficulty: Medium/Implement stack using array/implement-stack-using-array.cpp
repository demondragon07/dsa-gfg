class myStack {
  public:
  
  int *st;
  int top;
  int N;
    myStack(int n) {
        st=new int[n];
         top=-1;
        N=n;
    }

    bool isEmpty() {
        return top==-1;
    }

    bool isFull() {
       return top==N-1;
    }

    void push(int x) {
      if(!isFull()){
        top++;
        st[top]=x;
      }
    }

    void pop() {
        if(!isEmpty()) top--;
    }

    int peek() {
        // Returns the top element of the stack
        if(isEmpty()) return -1;
        return st[top];
    }
};