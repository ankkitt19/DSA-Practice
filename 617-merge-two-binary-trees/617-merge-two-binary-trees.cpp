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

        TreeNode* mergeTrees(TreeNode *root1, TreeNode *root2)
        {
            if (root1 == NULL and root2 == NULL)
            {
                return NULL;
            }
            int t = 0;
            if (root1)
            {
                t += root1->val;
            }
            if (root2)
            {
                t += root2->val;
            }
            TreeNode *temp = new TreeNode(t);
            if (root1 and root2)
            {
                temp->left = mergeTrees(root1->left, root2->left);
              temp->right = mergeTrees(root1->right, root2->right);
            }
            else if (root1)
            {
                temp->left = mergeTrees(root1->left, NULL);
                temp->right = mergeTrees(root1->right, NULL);
            }
            else
            {
                temp->left = mergeTrees(NULL, root2->left);
                temp->right = mergeTrees(NULL, root2->right);
            }
            return temp;
        }
};