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
    ListNode* reverseList(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* front = head;
        while(front != nullptr) {
            front = front->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }


    bool isPalindrome(ListNode* head) {
        ListNode* slow = head ;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* newHead =  reverseList(slow->next);
        ListNode* temp1 = head;
        ListNode* temp2 = newHead;
        while(temp2 != nullptr) {
            if(temp1->val != temp2->val) {
                reverseList(newHead);
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        reverseList(newHead);
        return true;
    }
};