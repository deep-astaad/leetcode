class Solution
{
public:
    bool checkValidBST(TreeNode *root, int &minV, int &maxV)
    {
        int temp;
        minV = maxV = root->val;
        if (root->left)
        {
            if (!checkValidBST(root->left, minV, temp) || temp >= root->val)
                return false;
        }

        if (root->right)
        {
            if (!checkValidBST(root->right, temp, maxV) || temp <= root->val)
                return false;
        }

        return true;
    }

    bool isValidBST(TreeNode *root)
    {
        int minV, maxV;
        if (root)
        {
            return checkValidBST(root, minV, maxV);
        }
        else
        {
            return true;
        }
    }
};