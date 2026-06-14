class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
  public:
  Node*temp;
  Node*start;
  Node*end;
  int Size;
    myQueue() {
        start=NULL;
        end=NULL;
        Size=0;
    }

    bool isEmpty() {
        return start==NULL;
    }

    void enqueue(int x) {
       temp=new Node(x);
       if(start==NULL){
           start=temp;
           end=temp;
       }else {
           end->next=temp;
           end=temp;
       }
       Size++;
    }

    void dequeue() {
       if(!isEmpty()){
           start=start->next;
           Size--;
       }
    }

    int getFront() {
      if(isEmpty())return -1;
      return start->data;
    }

    int size() {
        return Size;
    }
};
