/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
  int mini=INT_MAX;
  int maxi=INT_MIN;
   void solve(Node*root,int &mini, int &maxi){
       if(!root)return;
       if(root->data<mini)mini=root->data;
       if(root->data>maxi)maxi=root->data;
       solve(root->left,mini,maxi);
       solve(root->right,mini,maxi);
   }
    int findMax(Node *root) {
       solve(root,mini,maxi);
       return maxi;
    }

    int findMin(Node *root) {
       solve(root,mini,maxi);
       return mini;
    }
};