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
    int dfs(TreeNode* node, bool& isbalanced){
        if(!node) return 0;
        int leftsub = dfs(node->left,isbalanced);
        int rightsub = dfs(node->right,isbalanced);
        if(abs(leftsub - rightsub) > 1) isbalanced = false;

        return max(leftsub + 1, rightsub + 1);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        bool isbalanced = true;  
        dfs(root,isbalanced);
        return isbalanced;

    }
};
