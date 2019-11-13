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
    ListNode* partition(ListNode* head, int x) {
        ListNode* p = head;
        vector<int>a;
        while(p != NULL){
            a.push_back(p->val);
            p = p->next;
        }
        ListNode* h = new ListNode(0);
        head = h;
        for(int i = 0;i<a.size();i++){
            if(a[i] < x){
                h->next = new ListNode(a[i]);
                h = h->next;
            }
        }
        for(int i = 0;i<a.size();i++){
            if(a[i] >= x){
                h->next = new ListNode(a[i]);
                h = h->next;
            }
        }
        return head->next;
    }
};
