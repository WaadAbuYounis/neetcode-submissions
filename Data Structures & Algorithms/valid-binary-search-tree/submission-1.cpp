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
   bool isvalid(TreeNode* node, long long min_bound, long long max_bound) {
        if (!node) return true;

        if (node->val <= min_bound || node->val >= max_bound)
            return false;

        return isvalid(node->left,min_bound,node->val) &&
            isvalid(node->right, node->val, max_bound);
    }

    bool isValidBST(TreeNode* root) {
        return isvalid(root, LLONG_MIN, LLONG_MAX);
    }
};
