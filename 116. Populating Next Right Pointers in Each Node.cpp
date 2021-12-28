/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
       if(!root) {
           return nullptr;
       } 
        std::queue<Node*>node;
        node.push(root);
        
        while(!node.empty()) {
            int size = node.size();
            
            for(int i = 0; i <size; i++) {
                Node* tree = node.front();
                
                if(i == size-1) {
                    tree->next = nullptr;
                }
                
                node.pop();
                if(i != size-1) {
                    tree->next = node.front();
                }
                
                if(tree->left != nullptr) {
                    node.push(tree->left);
                }
                if(tree->right != nullptr) {
                    node.push(tree->right);
                }
            }
            
            
        }
        return root;
    }
};
