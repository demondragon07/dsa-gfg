/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void solve1(Node*root,vector<int>&ans){
      if(root==NULL || (root->left==NULL && root->right==NULL)) return;
      ans.push_back(root->data);
      if(root->left!=NULL)solve1(root->left,ans);
      else solve1(root->right,ans);
  }
  
  void solve2(Node*root,vector<int>&ans){
      if(root==NULL) return;
      if(root->left ==NULL && root->right ==NULL){
          ans.push_back(root->data);
      }
      solve2(root->left,ans);
      solve2(root->right,ans);
      
  }
  
  void solve3(Node*root,vector<int>&ans){
      if(root==NULL|| (root->left==NULL && root->right==NULL))return;
      if(root->right!=NULL)solve3(root->right,ans);
      else solve3(root->left,ans);
      ans.push_back(root->data);
  }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        if(root==NULL) return {};
       vector<int>ans;
       ans.push_back(root->data);
       solve1(root->left,ans);
       solve2(root->left,ans);
       solve2(root->right,ans);
       solve3(root->right,ans);
        
        return ans;
    }
};