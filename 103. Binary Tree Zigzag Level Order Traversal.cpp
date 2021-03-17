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
 vector<vector<int>> zigzagLevelOrder(TreeNode* root)
{
    if(root == nullptr)
    {
        return {};
    }
        
    vector<vector<int>> res;
    queue<TreeNode*> tree;
        
    tree.push(root);
    int j = 1;
        
    while(!tree.empty())
    {
        auto size = tree.size();
            
        vector<int> level;
            
        for(int i = 0; i < size; ++i)
        {
            auto node = tree.front();
            tree.pop();
                
            level.push_back(node->val);
                
            if(node->left != nullptr)
            {
                tree.push(node->left);
            }
            if(node->right != nullptr)
            {
                tree.push(node->right);
            }
        }
            
        if(j % 2 != 0)
        {
            res.push_back(level);
        }
        else
        {
            reverse(level.begin(), level.end());
            res.push_back(level);
        }
            
        ++j;
    }
        
    return res;
}
};
