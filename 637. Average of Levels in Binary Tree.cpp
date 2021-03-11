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
    vector<double> averageOfLevels(TreeNode* root) {
        
        std::vector<double>res;
        if(root ==nullptr){
            return res;
        }
        
        std::queue<TreeNode*>Q;
        Q.push(root);
        Q.push(nullptr);
        int count= 0;
        double add = 0;
        double avg = 0;
        
        while(!Q.empty()){
            TreeNode* current = Q.front();
            Q.pop();
            
            if(current == nullptr){
                avg = add/count;
                res.push_back(avg);
                count =0, add =0, avg =0;
                
                if(Q.size() > 0){
                    Q.push(nullptr);
                }
            }else{
                add += current->val;
                count+=1;
               
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
