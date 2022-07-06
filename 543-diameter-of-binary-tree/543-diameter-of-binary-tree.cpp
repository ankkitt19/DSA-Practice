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
  pair<int,int> dia(TreeNode* root){
    if(root==NULL){
      pair<int,int>p=make_pair(0,0);
      return p;
    }
    pair<int,int> left=dia(root->left);
    pair<int,int> right= dia(root->right);
    int ld=left.first;
    int rd=right.first;
    int h=left.second+right.second;
    pair<int,int> ans;
    ans.first=max(ld,max(rd,h));
    ans.second=max(left.second,right.second)+1;
    return ans;
  }
    int diameterOfBinaryTree(TreeNode* root) { 
        return dia(root).first;
    }
};