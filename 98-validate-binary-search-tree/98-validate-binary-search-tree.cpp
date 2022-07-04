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
    bool helper_valid_bST(TreeNode* root,long min,long max){
      if(root==NULL){
        return true;
      }
      if(root->val>min and root->val<max){
        bool lh=helper_valid_bST(root->left,min,root->val);
        bool rh=helper_valid_bST(root->right,root->val,max);
        return lh&&rh;
      }
      
        return false;
 
    }
    bool isValidBST(TreeNode* root) {
       return helper_valid_bST(root,LONG_MIN,LONG_MAX); 
    }
};