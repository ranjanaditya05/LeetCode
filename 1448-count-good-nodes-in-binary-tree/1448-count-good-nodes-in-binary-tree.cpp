/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        int length = 0;
        result(root, root->val, length);
        return length;
    }

    void result(TreeNode* root, int m, int &length) {
        if (root == NULL) {
            return;
        }
        if(root->val >= m) {
            length += 1;
            m= root->val;
        }
        result(root->left, m, length);
        result(root->right, m, length);
    }
};