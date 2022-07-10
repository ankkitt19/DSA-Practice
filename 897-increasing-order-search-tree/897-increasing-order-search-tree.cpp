/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  TreeNode* n= new TreeNode(0);
    void solve(TreeNode* root){
      if(root==NULL){
        return;
      }
      solve(root->left);
      root->left=NULL;
      n->right=root;
      n=root;
      solve(root->right);
      
    }
    TreeNode* increasingBST(TreeNode* root) {
       TreeNode* ans=n;
      solve(root);
      return ans->right;
    }
};