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
    vector<int> topView(Node *root) {
        map<int,int>mp;
        if(root==NULL) return {};
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                 auto u=q.front();
                 q.pop();
                 if(mp.find(u.second)==mp.end()){
                mp[u.second]=u.first->data;
                  }
               if(u.first->left!=NULL){
                   q.push({u.first->left,u.second-1});
               }
               if(u.first->right!=NULL){
                   q.push({u.first->right,u.second+1});
               }
            }
        }
        vector<int>ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};