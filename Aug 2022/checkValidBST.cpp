class Solution {
    public:
        bool checkValidBST(TreeNode *root, int &minV, int &maxV)
        {
            if(root == NULL){
                return true;
            }
            else if(root >= min && root <= max){
                return false;
            }
            min = min(min,root->val);
            max = max(max,root->val);
            return (checkValidBST(root,min,max) && checkValidBST(root,min,max));
        }
    
        bool isValidBST(TreeNode *root) {
            if(root == NULL){
                return true;
            }
            int min = INT_MIN,max = INT_MAX;
            return checkValidBST(root->left,min,max);
        }
    };