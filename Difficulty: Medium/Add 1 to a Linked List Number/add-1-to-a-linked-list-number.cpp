/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
   Node*reverse(Node*head){
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
   
    Node* addOne(Node* head) {
        Node *l1=reverse(head);
        Node*dummy=new Node(-1);
        Node*temp=dummy;
        Node*l2=new Node(1);
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int sum=0;
            if(l1){
                sum+=l1->data;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->data;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            Node*newnode=new Node(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return reverse(dummy->next);
    }
};