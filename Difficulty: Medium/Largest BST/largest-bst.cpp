/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
    
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    class largestnode{
        public:
        int maxnode;
        int minnode;
        int maxsize;
        largestnode(int maxnode ,int minnode , int maxsize){
            this->maxnode=maxnode;
            this->minnode=minnode;
            this->maxsize=maxsize;
        }
    };
    
    largestnode solve(Node*root){
        if(!root) return largestnode(INT_MIN,INT_MAX,0);
        auto left=solve(root->left);
        auto right=solve(root->right);
        
        if(left.maxnode<root->data && root->data<right.minnode){
            return largestnode(max(root->data,right.maxnode), min(root->data,left.minnode),left.maxsize+right.maxsize+1);
        }
        else return largestnode(INT_MAX,INT_MIN,max(left.maxsize,right.maxsize));
        
    }
    
    int largestBst(Node *root){
     return solve(root).maxsize;
        
    }
};