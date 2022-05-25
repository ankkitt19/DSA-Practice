/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<int> rightSideView(TreeNode *root)
        {
            vector<int> ans;
            vector<vector<int>> arr;
            if (root == NULL)
            {
                return ans;
            }
            queue<TreeNode*> q;
            q.push(root);
            while (!q.empty())
            {
                vector<int> level;
                int size = q.size();
                for (int i = 0; i < size; i++)
                {
                    TreeNode *var = q.front();
                    q.pop();
                    level.push_back(var->val);
                    if (var->left) q.push(var->left);
                    if (var->right) q.push(var->right);
                }
                arr.push_back(level);
            }
            // cout<<arr.size();
            int k=0;
            for(auto i:arr){
                int sz=i.size();
                // cout<<arr[k][sz-1]<<endl;
                ans.push_back(arr[k][sz-1]);
                k++;
            }
       return ans;
        }
};