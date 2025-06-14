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
        ListNode* head = new ListNode(mov1->val + mov2->val);
        int carry = head->val / 10;
        head->val = head->val % 10;
        mov1 = mov1->next;
        mov2 = mov2->next;
        ListNode* mover = head;
        while(mov1 != nullptr && mov2 != nullptr) {
            ListNode* temp = new ListNode(mov1->val + mov2->val + carry);
            carry = temp->val / 10;
            temp->val = temp->val % 10;
            mover->next = temp;
            mover = mover->next;
            mov1 = mov1->next;
            mov2 = mov2->next;
        }
        while(mov1 != nullptr){
            ListNode* temp = new ListNode(mov1->val + carry);
            carry = temp->val / 10;
            temp->val = temp->val % 10;
            mover->next = temp;
            mover = mover->next;
            mov1 = mov1->next;
        }
        while(mov2 != nullptr){
            ListNode* temp = new ListNode(mov2->val + carry);
            carry = temp->val / 10;
            temp->val = temp->val % 10;
            mover->next = temp;
            mover = mover->next;
            mov2 = mov2->next;
        }

        if(carry != 0) {
            ListNode* temp = new ListNode(carry);
            mover->next = temp;
            mover = mover->next;
        }
        return head;
    }
};