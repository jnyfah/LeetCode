/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        std::vector<int>res;
        displayPostOrder(root, res);
        return res;
    }
    void displayPostOrder(Node *nodeptr, vector<int>& res) {
       if(!nodeptr){
           return;
       }
        
        for(Node *N: nodeptr->children){
            displayPostOrder(N, res);
        }
        
        res.push_back(nodeptr->val);
    }
};
