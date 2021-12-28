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
    vector<int> rightSideView(TreeNode* root) {
        
        
        vector<int> res;
        if(!root) {
            return res;
        }
        queue<TreeNode*>node;
        node.push(root);
        
        while(!node.empty()) {
            int size = node.size();
            
            for(int i =0; i<size; i++) {
                TreeNode* tree = node.front();
                
                if(i == size-1) {
                    res.push_back(tree->val);
                }
                node.pop();
                
                if(tree->left != nullptr) {
                    node.push(tree->left);
                }
                if(tree->right != nullptr) {
                    node.push(tree->right);
                }
            }
        }
        return res;
    }
};
