/*
class Node {
  public:
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
  
  void markparent(Node*root,unordered_map<Node*,Node*>&mp){
      if(!root)return;
      if(root->left)mp[root->left]=root;
      if(root->right)mp[root->right]=root;
      markparent(root->left,mp);
      markparent(root->right,mp);
  }
  Node*target1(Node*root,int tar){
      if(!root) return NULL;
      if(root->data==tar)return root;
      Node*leftans=target1(root->left,tar);
      if(leftans!=NULL)return leftans;
      return target1(root->right,tar);
  }
    int minTime(Node* root, int target) {
        if(!root)return 0;
        unordered_map<Node*,Node*>parent;
        markparent(root,parent);
        Node*tar=target1(root,target);
        queue<Node*>q;
        q.push(tar);
        unordered_map<Node*,bool>vis;
        int ans=-1;
        vis[tar]=true;
        while(!q.empty()){
            int sz=q.size();
            ans++;
            for(int i=0;i<sz;i++){
                auto u=q.front();
                q.pop();
                if(u->left && !vis[u->left]){
                    q.push(u->left);
                    vis[u->left]=true;
                }
                if(u->right && !vis[u->right]){
                    q.push(u->right);
                    vis[u->right]=true;
                }
                if(parent[u] && !vis[parent[u]]){
                    q.push(parent[u]);
                    vis[parent[u]]=true;
                }
            }
        }
        return ans;
    }
};