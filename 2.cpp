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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;
        else if(l2 == NULL)
            return l1;
        int flag = 0;
        ListNode *head = l1;
        ListNode *pre;
        while(l1 and l2){
            int v1 = l1->val;
            int v2 = l2->val;
            int v3 = (v1 + v2 + flag)%10;
            flag = (v1 + v2 + flag) / 10;
            l1->val = v3;
            pre = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1 == NULL and l2 != NULL){
            while(l2){
                int v2 = l2->val;
                pre->next = new ListNode((v2+flag)%10);
                l1 = pre->next;
                pre = l1;
                l1 = l1->next;
                l2 = l2->next;
                flag = (v2 + flag)/10;
            }
        }else if(l1 !=NULL and l2 == NULL){
            while(l1){
                int v1 = l1->val;
                l1->val = (v1 + flag)%10;
                flag = (v1 + flag) / 10;
                pre = l1;
                l1 = l1->next;
            }
        }
        if(flag == 0)
            return head;
        else{
            pre->next = new ListNode(flag);
            return head;
        }
    }
};
