/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution {
  public:
    
    Node*mergetwosortedlists(Node*L1,Node *L2){
        if(L1==NULL) return L2;
        if(L2==NULL) return L1;
        
        Node*result=NULL;
        if(L1->data<=L2->data){
            result=L1;
            result->next=mergetwosortedlists(L1->next,L2);
        }else{
            result=L2;
            result->next=mergetwosortedlists(L1,L2->next);
        }
        return result;
    }
    
    Node*reversse(Node*head){
        if(head==NULL || head->next==NULL)return head;
        Node*prev=NULL;
        Node*curr=head;
        while(curr!=NULL){
            Node*forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    struct Node *mergeResult(Node *node1, Node *node2) {
        Node*head=mergetwosortedlists(node1,node2);
        return reversse(head);
    }
};