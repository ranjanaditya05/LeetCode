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
    bool evaluateTree(TreeNode* root) {
        if(root->left == NULL && root->right == NULL) {
            return root->val;
        }

        bool leftvalue = evaluateTree(root->left);
        bool rightvalue = evaluateTree(root->right);

        if(root->val == 2) {
            return leftvalue || rightvalue;
        } else if (root->val == 3) {
            return leftvalue && rightvalue;
        }
        return false;
    }    
};