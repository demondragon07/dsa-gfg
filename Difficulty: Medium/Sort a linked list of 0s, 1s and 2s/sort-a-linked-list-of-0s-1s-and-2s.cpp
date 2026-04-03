/* Node is defined as
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
class Solution {
  public:
    Node* segregate(Node* head) {
       Node* anshead=NULL;
       Node* zerohead=NULL;
       Node* onehead=NULL;
       Node* twohead=NULL;
       Node* temp=head;
       Node* zero=NULL;
       Node* one=NULL;
       Node* two=NULL;
       
       while(temp){
           Node* nextNode=temp->next;
           if(temp->data==0){
               if(!zerohead) {
                   zerohead=temp;
                   zero=zerohead;
               }
               else{
                   zerohead->next=temp;
                   zerohead=temp;
               }
           }
           else if(temp->data==1){
               if(!onehead) {
                   onehead=temp;
                   one=onehead;
               }
               else{
                   onehead->next=temp;
                   onehead=temp;
               }
           }else{
               if(!twohead) {
                   twohead=temp;
                   two=twohead;
               }
               else{
                   twohead->next=temp;
                   twohead=temp;
               }
           }
           temp->next=NULL;
           temp=nextNode;
       }
       
       if(!zero){
           if(!one){
               anshead=two;
           }else{
               anshead=one;
               onehead->next=two;
           }
       }else{
           anshead=zero;
           if(!one){
               zerohead->next=two;
           }else{
               zerohead->next=one;
               onehead->next=two;
           }
       }
       
       return anshead;
    }
};