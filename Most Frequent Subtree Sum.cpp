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
    private:
    map<int, int> m;
    vector<int> v;
    
        
        int subtree(TreeNode* root, int& freq)
        {
            int left, right, sum = 0;
            
           if(!root) 
           {
               return 0;
           }else
           {
               left = subtree(root->left, freq);
               right = subtree(root->right, freq);
               sum = left + right + root->val;
            
               m[sum]++;
            
               if (m[sum] > freq)
                 {
                    freq = m[sum];
            
                     v.clear();
            
                     v.push_back(sum);
                   
                  } else if (m[sum] == freq)
                  {
                      v.push_back(sum);
                   }
           
               }
            
        
        return sum;
    }
public:
    vector<int> findFrequentTreeSum(TreeNode* root) 
    {
        int freq=0;
        
        subtree(root, freq);
        
        return v;
        
    }
};
