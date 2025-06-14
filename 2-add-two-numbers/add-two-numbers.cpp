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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* mov1 = l1;
        ListNode* mov2 = l2;
        ListNode* dummy = new ListNode(-1);
        int carry = 0;
        ListNode* mover = dummy;
        while(mov1 != nullptr || mov2 != nullptr) {
            int sum = carry;
            if(mov1) {sum += mov1->val;}
            if(mov2) {sum += mov2->val;}
            carry = sum / 10;
            ListNode* temp = new ListNode(sum % 10);
            mover->next = temp;
            mover = mover->next;
            if(mov1) {mov1 = mov1->next;}
            if(mov2) {mov2 = mov2->next;}
            
        }
        if(carry != 0) {
            ListNode* temp = new ListNode(carry);
            mover->next = temp;
            mover = mover->next;
        }
        return dummy->next;
    }
};