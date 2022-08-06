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
    bool ans(TreeNode *root, set<int> &s, int k){
        if(root == NULL){
            return false;
        }
        if(s.count(k-root->val)){
            return true;
        }
        s.insert(root->val);
        return (ans(root->left,s,k) || ans(root->right,s,k));
        // return false;
    }
    bool findTarget(TreeNode* root, int k) {
        set<int> s;
        return ans(root,s,k);
    }
};