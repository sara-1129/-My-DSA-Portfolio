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
        ListNode* fast = head;
        for(int i = 1; i <=n ; i++) {
            fast = fast->next;
        }
        if(fast == nullptr) {
            fast = head;
            head = head->next;
            delete fast;
            return head;
        }
        ListNode* slow = head;
        while(fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;


        return head;

        
    }
};