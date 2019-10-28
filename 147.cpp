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
    ListNode* insertionSortList(ListNode* head) {
        auto dumy = new ListNode(0);
        while(head){
            auto p = dumy;
            while(p->next and p->next->val < head->val)
                p = p->next;
            ListNode* q = head;
            head = head->next;
            q->next = p->next;
            p->next = q;
        }
        return dumy->next;
    }
};
