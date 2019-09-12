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
        if(head == NULL or head->next == NULL)
            return head;
        int temp = head->val;
        ListNode* zhong = head;
        while(zhong->next != NULL){
            if(zhong->next->val == zhong->val)
                zhong->next = zhong->next->next;
            else
                zhong = zhong->next;
        }
        return head;
    }
};
