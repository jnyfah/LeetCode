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
    int res = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        preOrder(root);
        return res;
    }
    
    bool isLeaf(TreeNode* root) {
        if(root == nullptr) {
            return false;
        }
        
        if(root->left == nullptr && root->right == nullptr) {
            return true;
        }
        
        return false;
    }
    void preOrder(TreeNode* root){
        if(root!= nullptr){
        if(isLeaf(root->left)) {
            res += root->left->val;
        }
        preOrder(root->left);
        preOrder(root->right);
    }
    }
    
};
