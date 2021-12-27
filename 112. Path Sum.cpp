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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        if(root->right == nullptr && root->left == nullptr && root->val - targetSum == 0) {
            return true;
        }
        
        int left = hasPathSum(root->left, targetSum- root->val);
        int right = hasPathSum(root->right, targetSum - root->val);
        
        return left || right;
    }
};
