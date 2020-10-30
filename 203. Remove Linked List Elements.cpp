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
    ListNode* removeElements(ListNode* head, int val) {
       ListNode *nodeptr =head;
        ListNode *prev=nullptr;
        
       if(!head){
           return head;
       }
        while(nodeptr){
            
            if(prev==nullptr && nodeptr->val ==val){  //if head is == val
                nodeptr =nodeptr->next;
                head =nodeptr;
            }else if(nodeptr->val == val){
                prev->next = nodeptr->next;
                nodeptr = nodeptr->next;
            }else{
                prev =nodeptr;
                nodeptr =nodeptr->next;
            }
        }
        return head;
    }
};
