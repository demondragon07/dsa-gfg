/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        if(root==NULL) return {};
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto u=q.front();
                q.pop();
                mp[u.second]=u.first->data;
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