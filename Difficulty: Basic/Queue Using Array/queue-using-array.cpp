class myQueue {
  
  public:
  int *q;
  int start;
  int end;
  int N;
    myQueue(int n) {
       q=new int[n];
       start=-1;
       end=-1;
       N=n;
    }

    bool isEmpty() {
       return start==-1;
    }

    bool isFull() {
      return (end+1)%N==start;
       
    }

    void enqueue(int x) {
        if(isFull())return;
        if(start ==-1 && end==-1){
            start++;
            end++;
        }else end=(end+1)%N;
      q[end]=x;
    }

    void dequeue() {
        if(isEmpty())return;
        if(start==end){
            start=-1;
            end=-1;
        }else start=(start+1)%N;
    }

    int getFront() {
        if(!isEmpty()) return q[start];
        return -1;
    }

    int getRear() {
        if(!isEmpty()) return q[end];
        return -1;
    }
};