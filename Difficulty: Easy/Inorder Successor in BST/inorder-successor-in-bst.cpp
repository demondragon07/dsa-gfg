/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
    void solve(Node*root,vector<Node*>&inorder){
        if(!root)return;
        solve(root->left,inorder);
        inorder.push_back(root);
        solve(root->right,inorder);
    }
    
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    int inOrderSuccessor(Node *root, Node *x) {
        vector<Node*>inorder;
       solve(root,inorder);
       int n=inorder.size();
       int k=0;
       for(int i=0;i<n;i++){
           if(inorder[i]==x) 
           {
               k=i;
              break;
           }
       }
       return k==n-1?-1:inorder[k+1]->data;
    }
};