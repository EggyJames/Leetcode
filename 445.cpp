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
        bool carry = false;
        stack<ListNode* >s1,s2;
        ListNode *head = nullptr;
        
        while(l1 != nullptr){
            s1.push(l1);
            l1 = l1->next;
        }
        while(l2 != nullptr){
            s2.push(l2);
            l2 = l2->next;
        }
        while(!s1.empty() and !s2.empty()){
            s1.top()->val += s2.top()->val + (carry?1:0);
            carry = s1.top()->val >= 10;
            s1.top()->val%=10;
            s1.top()->next = head;
            head = s1.top();
            s1.pop();
            s2.pop();
        }
        auto s = s1.empty()?std::move(s2) : std::move(s1);
        while(!s.empty()){
            s.top()->val += (carry?1:0);
            carry = s.top()->val >= 10;
            s.top()->val%=10;
            s.top()->next = head;
            head = s.top();
            s.pop();
        }
        if(carry){
            auto node = new ListNode(1);
            node->next = head;
            head = node;
        }
        return head;
    }
   
};
