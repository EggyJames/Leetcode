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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        int cnt = 1;
        ListNode* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            cnt++;
        }
        k = k % cnt;
        temp->next = head;
        int d = cnt-k;
        while(d--){
            temp = head;
            head = head->next;
        }
        temp->next = NULL;
        return head;
    }
};
