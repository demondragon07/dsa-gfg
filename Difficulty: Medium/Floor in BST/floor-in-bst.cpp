/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int floor(Node* root, int x) {
        int ans=-1;
        while(root){
            if(root->data==x)return root->data;
            if(x<root->data)root=root->left;
            else{
                ans=root->data;
                root=root->right;
            }
        }
        return ans;
    }
};