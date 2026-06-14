/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class myStack {
  public:
  Node* temp;
  Node*top;
  int Size;
    myStack() {
       Size=0;
       top=NULL;
    }

    bool isEmpty() {
       return top==NULL;
    }

    void push(int x) {
      temp=new Node(x);
      temp->next=top;
      top=temp;
      Size++;
    }

    void pop() {
      if(!isEmpty()) {
          top=top->next;
          Size--;
      }
    }

    int peek() {
        if(isEmpty())return -1;
        return top->data;
    }

    int size() {
        return Size;
    }
};