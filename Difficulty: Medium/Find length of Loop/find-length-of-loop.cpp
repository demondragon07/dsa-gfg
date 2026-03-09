/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node*slow=head;
        Node*fast=head;
        int len=0;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                Node*start=head;
                while(slow!=start){
                    start=start->next;
                    slow=slow->next;
                }
                fast=start->next;
                len++;
                while(fast!=start){
                    len++;
                    fast=fast->next;
                }
                return len;
            }
        }
        
        return 0;
    }
};