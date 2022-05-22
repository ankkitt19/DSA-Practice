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
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL){
            return ans;
        }
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            int size=s.size();
            TreeNode* var=s.top();
            s.pop();
                ans.push_back(var->val);
               
                if(var->right!=NULL) s.push(var->right);
 if(var->left!=NULL) s.push(var->left);
           
        }
         return ans;
    }
};