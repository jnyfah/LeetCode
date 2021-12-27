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
    int preindex = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, preorder.size()-1);
    }
    
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int start, int end) {
        if(start > end) {
            return nullptr;
        }
    
        TreeNode* tree = new TreeNode(preorder[preindex]);
        preindex++;
        int index;
        
        for(int i = start; i<= end; i++) {
            if(inorder[i] == tree->val){
               index = i;
                break;
            }
        }
        
        tree->left = build(preorder, inorder, start, index-1);
        tree->right = build(preorder, inorder, index+1, end);
        
        return tree;
    }
};
