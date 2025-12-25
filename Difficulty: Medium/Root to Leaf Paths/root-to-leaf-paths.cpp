/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
   void solve(Node*root, vector<int>&temp ,vector<vector<int>>&ans){
       temp.push_back(root->data);
       if(root->left==NULL && root->right==NULL){
           ans.push_back(temp);
       }
       else{
       if(root->left)solve(root->left,temp,ans);
       if(root->right)solve(root->right,temp,ans);
       }
       temp.pop_back();
   }
    vector<vector<int>> Paths(Node* root) {
       if(root==NULL) return{};
       vector<int>temp;
       vector<vector<int>>ans;
       solve(root,temp,ans);
       return ans; 
    }
};