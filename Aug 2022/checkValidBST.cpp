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
class Solution
{
public:
    bool checkValidBST(TreeNode *root, long long minV, long long maxV)
    {
        if (root == NULL)
        {
            return true;
        }
        if (root->val <= minV || root->val >= maxV)
        {
            return false;
        }
        return (checkValidBST(root->left, minV, (long long)root->val) && checkValidBST(root->right, (long long)root->val, maxV));
    }

    bool isValidBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }
        long long min = LLONG_MIN, max = LLONG_MAX;
        return checkValidBST(root, min, max);
    }
};