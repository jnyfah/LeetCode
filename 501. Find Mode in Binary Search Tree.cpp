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
   void inorder(TreeNode* root,map<int,int> &res){
        if(root!=NULL){
        inorder(root->left,res);
        res[root->val]++;
        inorder(root->right,res);    
        }
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int> res;
        inorder(root,res);
        int currentMax=0;
        
        for(auto it : res){
            if (it.second > currentMax) {
                currentMax = it.second;
             }
        }
        vector<int> ans;
        for(auto it : res){
            if(it.second == currentMax){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
