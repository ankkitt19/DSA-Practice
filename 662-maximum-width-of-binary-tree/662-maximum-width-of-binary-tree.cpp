/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        long widthOfBinaryTree(TreeNode *root)
        {
            long ans = 0;
            if (root == NULL)
            {
                return ans;
            }
            queue<pair<TreeNode*,long>> q;
            q.push({ root,0 });
            while (!q.empty())
            {
                long size = q.size();
                long start = q.front().second;
                long end = q.back().second;
                ans = max(ans, end - start + 1);
                for (int i = 0; i < size; i++)
                {
                    pair<TreeNode*, int>var = q.front();
                    q.pop();
                  long ind=var.second;
                    if (var.first->left) q.push({ var.first->left,
                        2 *(ind) +1 });
                    if (var.first->right) q.push({ var.first->right,
                        2 *(ind) + 2 });
                }
            }
            return ans;
        }
};