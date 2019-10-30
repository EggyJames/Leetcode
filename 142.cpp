 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        while(head){
            if(!less<ListNode *>()(head,head->next)){
                return head->next;
            }
            head = head->next;
        }
        return nullptr;
    }
};
