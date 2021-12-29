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
    vector<vector<int>> verticalOrder(TreeNode* root) {
        
        
        vector<vector<int>>res;
        
        if(!root) {
            return res;
        }
        map<int, vector<int>>mp;
        
        queue<pair<int, TreeNode*>> node;
        
        node.push(make_pair(0, root));
        
        while(!node.empty()) {
            int size = node.size();
            
            for(int i = 0; i<size; i++) {
                TreeNode* temp = node.front().second;
                int num = node.front().first;
                
                mp[num].push_back(temp->val);
                
                node.pop();
                
                if(temp->left != nullptr) {
                    node.push(make_pair(num-1, temp->left));
                }
                if(temp->right != nullptr) {
                    node.push(make_pair(num+1, temp->right));
                }
            }
        }
        
        for(auto& vec : mp) {
            res.push_back(vec.second);
        }
        
        return res;
    }
};
