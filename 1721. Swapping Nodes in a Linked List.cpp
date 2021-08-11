/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode* s=head;
        std::vector<ListNode*>list;
        
        while(s) {
            list.push_back(s);
            s= s->next;
        }
        
        std::swap(list[k-1]->val, list[list.size()-k]->val);
        return head;
        
		
    }
};
