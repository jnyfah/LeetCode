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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* headref =head;
    int count = 0;
        while(headref){
           headref=headref->next;
            count++;
        }
        
        if (n == count) // check if need to remove the first node
            return head->next;
        
        headref =head;count -=n;
        count --;
        while (count--) // get p the node before the n-th from the end
            headref = headref->next;
        
        
        headref->next=headref->next->next;
        
        
       
        
        return head;
    }
};
