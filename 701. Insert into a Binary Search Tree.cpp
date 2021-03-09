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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newnode = makenode(val);

         insertNode(root, newnode);
        return root;
    }
    TreeNode* makenode(int value){

        TreeNode* nodeptr = new TreeNode;

        nodeptr->val = value;

        nodeptr->left = nodeptr->right = nullptr;

        return nodeptr;

    }
    void insertNode(TreeNode *&nodeptr, TreeNode *&newnode){

        if(nodeptr == nullptr){

            nodeptr = newnode;

        }else if(newnode->val <= nodeptr->val){

            insertNode(nodeptr->left, newnode);

        }else{

            insertNode(nodeptr->right, newnode);

        }

    }
    
};
