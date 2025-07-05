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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* front = head;
        while(front != nullptr)
        {
            front = front->next;
            current->next = prev;
            prev = current;
            current = front; 
        }
        return prev;   
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        slow = slow->next;
        ListNode* newHead = reverseList(slow);
        ListNode* mover1 = head;
        ListNode* mover2 = newHead;
        while(mover2 != nullptr)
        {
            if(mover2->val != mover1->val)
            {
                reverseList(newHead);
                return false;
            }
            mover1 = mover1->next;
            mover2 = mover2->next;
        }
        reverseList(newHead);
        return true;
    }
};