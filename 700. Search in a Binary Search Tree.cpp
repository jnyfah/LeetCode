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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* nodeptr = root;
        
        while(nodeptr){
            if(nodeptr->val == val) {
                return nodeptr;
            }else if(val < nodeptr->val){
                nodeptr =nodeptr->left;
            }else {
                nodeptr = nodeptr->right;
            }
        }
        return nullptr;
    }
};
