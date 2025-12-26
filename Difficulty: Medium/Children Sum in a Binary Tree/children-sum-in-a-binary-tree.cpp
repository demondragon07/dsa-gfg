/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

*/
class Solution {
  public:
    bool solve(Node*root){
        if(!root) return true;
        if(!root->left && !root->right) return true;
        int ans=0;
        if(root->left)ans+=root->left->data;
        if(root->right)ans+=root->right->data;
        if(ans!=root->data)return false;
        return solve(root->left) && solve(root->right);
    }
    bool isSumProperty(Node *root) {
        return solve(root);
        
    }
};