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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int pindex = inorder.size() -1;
        return build(inorder, postorder, 0, inorder.size()-1, pindex);
    }
    
    
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int start, int end, int& pindex) {
        if(start > end || pindex < 0){
            return nullptr;
        }
        
        
         int index = distance(inorder.begin(), find(inorder.begin() + start, inorder.begin() + end, postorder[pindex]));
        TreeNode* tree = new TreeNode(postorder[pindex]);
        pindex--;
        
		
        tree->right = build(inorder, postorder, index+1, end, pindex);
        tree->left = build(inorder, postorder,start, index-1, pindex);
        
        
        return tree;
    }
};
