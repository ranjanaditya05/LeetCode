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
    bool isValidBST(TreeNode* root) {
        return isValidBSThelper(root, LONG_MIN, LONG_MAX); 
    }

    bool isValidBSThelper(TreeNode* root, long minval, long maxval) {
        if(root == NULL) {
            return 1;
        }
        if(root->val <= minval || root->val >= maxval) {
            return 0;
        }
        return isValidBSThelper(root->left, minval, root->val) && isValidBSThelper(root->right, root->val, maxval);
        }
};