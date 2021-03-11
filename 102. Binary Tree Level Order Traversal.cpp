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
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>>res;
        
        if(root ==nullptr){
            return res;
        }
        
        std::queue<TreeNode*>Q;
        Q.push(root);
        Q.push(nullptr);
        vector<int> cur_vec;
        
        while(!Q.empty()){
            TreeNode* current = Q.front();
            Q.pop();
            
            if(current == nullptr){
                res.push_back(cur_vec);
                cur_vec.resize(0);
                
                if(Q.size() > 0){
                    Q.push(nullptr);
                }
            }else{
                cur_vec.push_back(current->val);
                if (current->left){
                  Q.push(current->left);  
                } 
                if (current->right){
                  Q.push(current->right);  
                } 
            }
        }
        
        return res;
    }
};
