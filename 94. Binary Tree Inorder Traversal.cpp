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
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> res;
        InOrder(root, res);
        return res;
    }
    void InOrder(TreeNode *nodeptr, std::vector<int> &res) const {
        if(nodeptr){
            InOrder(nodeptr->left, res);
            res.push_back(nodeptr->val);
            InOrder(nodeptr->right, res);
          
        }
    }
};
