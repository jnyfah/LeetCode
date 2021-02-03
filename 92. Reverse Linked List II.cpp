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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
       if(!head) {
           return nullptr; 
       }
       ListNode* current = head;
       ListNode* prev = nullptr;
        
        while(m > 1){
            prev =current;
            current = current->next;
            m--; n--;
        }
        ListNode* subhead =prev;
        ListNode* tail = current;
        ListNode* temp = nullptr;
        
        while(n > 0) {
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
            n--;
        }
        
        if(subhead != nullptr) {
            subhead->next = prev;
        }else{
            head = prev;
        }
        
        tail->next = current;
        return head;
        
    }
};
