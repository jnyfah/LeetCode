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
    ListNode* insertionSortList(ListNode* head) {
        
        if (head == NULL || head->next == NULL)
		    return head;
        
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* current = head;
        ListNode* prev = dummy;
        
        
        
        while(current != nullptr) {
            if((current->next) && (current->next->val < current->val)) {
                while((prev->next) && (prev->next->val < current->next->val)) {
                    prev = prev->next;
                }
                ListNode *temp = prev->next;
                prev->next = current->next;
                current->next = current->next->next;
                prev->next->next = temp;
                prev = dummy;
                
            }else {
                current = current->next;
            }        
             
        }
        return dummy->next;
    }
};
