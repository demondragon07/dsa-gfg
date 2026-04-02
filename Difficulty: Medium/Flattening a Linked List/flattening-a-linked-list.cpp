/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
  Node* mergetwosortedlists(Node*L1,Node*L2){
      if(L1==NULL) return L2;
      if(L2==NULL) return L1;
      Node*result=NULL;
      if(L1->data<=L2->data){
          result=L1;
          result->bottom=mergetwosortedlists(L1->bottom,L2);
      }
      else {
          result=L2;
          result->bottom=mergetwosortedlists(L1,L2->bottom);
      }
      return result;
  }
    Node *flatten(Node *root) { 
        if(root==NULL || root->next==NULL) return root;
       Node*head2=flatten(root->next);
       Node*head=mergetwosortedlists(root,head2);
     return head;
    }
};