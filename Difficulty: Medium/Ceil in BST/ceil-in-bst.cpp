class Solution {
  public:
    int findCeil(Node* root, int x) {
        int ceilll=-1;
        while(root){
            if(root->data==x) return root->data;
            if(x>root->data) root=root->right;
            else{
                ceilll=root->data;
                root=root->left;
            }
        }
        return ceilll;
    }
};
