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
    vector<vector<int>> ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){
            return ans;
        }
        bool flag=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size;
             size=q.size();
            vector<int> level(size);
            for(int i=0;i<size;i++){
                TreeNode* var=q.front();
                q.pop();
                if(flag==0) level[i]=(var->val);
                else if(flag==1) level[size-1-i]=(var->val);
                if(var->left) q.push(var->left);
                if(var->right) q.push(var->right);
            }
             ans.push_back(level);
        flag=!flag;
        }
       return ans;
    }
};