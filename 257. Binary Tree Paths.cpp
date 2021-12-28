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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        help(root, res, "");
        return res;
    }
    
    void help(TreeNode* root, vector<string>& res, string str) {
        if(!root) {
            return;
        }
        if(!root->left && !root->right) {
            res.push_back(str + to_string(root->val) );
            return;
        }
        help(root->left, res, str+ to_string(root->val) + "->");
        help(root->right, res, str + to_string(root->val) + "->");
    }
};
