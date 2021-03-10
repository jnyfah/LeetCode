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
    vector<int> preorderTraversal(TreeNode* root) {
       std::vector<int> res;
        PreOrder(root, res);
        return res; 
    }
    void PreOrder(TreeNode *nodeptr, std::vector<int> &res) const {
        if(nodeptr){
            res.push_back(nodeptr->val);
            PreOrder(nodeptr->left, res);
            PreOrder(nodeptr->right, res);
          
        }
    }
};
