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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res ;
        if(!root) return res;
        queue<TreeNode*> que ;
        que.push(root);
        TreeNode* curr ;
        while(!que.empty()){
            int len = que.size();
            vector<int> currlvl ;
            for(int i = 0 ; i < len ; i++){
                curr = que.front();
                currlvl.push_back(curr->val);
                if(curr->left) que.push(curr->left);
                if(curr->right) que.push(curr->right);
                que.pop();
            }
            res.push_back(currlvl);
        }
        return res;
    }
};
