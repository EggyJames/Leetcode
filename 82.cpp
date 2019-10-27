/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL || head->next ==NULL)
            return head;
        ListNode* h = head->next;
        if(head->val == h ->val){
            while(h!= NULL and head->val == h->val)
                h = h->next;
            head = deleteDuplicates(h);
        }
        else{
            head->next = deleteDuplicates(h);
    }
    return head;
    }
};
