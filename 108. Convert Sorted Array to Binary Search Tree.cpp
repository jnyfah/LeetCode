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
    TreeNode* tree(vector<int>& nums, int start, int end) {
        if(start > end ){
            return nullptr;
        }
        
        int mid = (start+end)/2;
        TreeNode* root = new TreeNode;
        root->val = nums[mid];
        root->left = tree(nums, start, mid-1);
        root->right = tree(nums, mid+1, end);
        
        return root;
        
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        return tree(nums, start, end);
    }
};