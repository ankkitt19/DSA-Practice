/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  unordered_map<TreeNode*,TreeNode*> mp;
 unordered_set<TreeNode*>vis;
    void connectwithparent(TreeNode* root,TreeNode* parent){
      if(root==NULL){
        return;
      }
      mp[root]=parent;
      connectwithparent(root->left,root);
      connectwithparent(root->right,root);
    }
  void dfs(TreeNode* root,int k,vector<int> &ans){
    if(root==NULL){
      return;
    }
    if(vis.count(root)==true) return;
    vis.insert(root);
    if(k==0){
      ans.push_back(root->val);
      return;
    }
    dfs(root->left,k-1,ans);
    dfs(root->right,k-1,ans);
    dfs(mp[root],k-1,ans);
  }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
      vector<int> ans;  
      if(root==NULL){
          return ans;
        }
      connectwithparent(root,NULL);
      dfs(target,k,ans);
      return ans;
    }
};