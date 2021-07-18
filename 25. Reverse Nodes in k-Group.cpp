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
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* curlast = head;
        for(int i = 0; i<k; ++i) {
            if(!curlast) {
                return head;
            }
            curlast = curlast->next;
        }
      ListNode* newhead = reverse(head, curlast);
        head->next = reverseKGroup(curlast, k);
        return newhead;
    }
    
    ListNode* reverse (ListNode* first, ListNode* last) {
        ListNode* cur = first;
        ListNode* prev = last;
        
        while(first != last){
            ListNode* temp = first->next;
            first->next = prev;
            prev = first;
            first = temp;
        }
        return prev;
    }
};
