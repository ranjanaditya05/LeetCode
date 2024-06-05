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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return sortedArrayToBSThelper(nums, 0, n-1);
    }

    TreeNode* sortedArrayToBSThelper(vector<int> &nums, int l, int r) {
        if (l > r) {
            return NULL;
        }
        int mid =(l+r)/2;
        TreeNode* newNode = new TreeNode(nums[mid]);
        newNode->left = sortedArrayToBSThelper(nums, l, mid-1);
        newNode->right = sortedArrayToBSThelper(nums, mid+1, r);

        return newNode;
    }
};