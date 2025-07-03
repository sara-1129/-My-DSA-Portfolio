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
    ListNode* middleNode(ListNode* head) {
        ListNode* mover = head;
        int cnt = 0;
        while(mover != nullptr)
        {
            mover = mover->next;
            cnt++;
        }
        mover = head;
        for(int i = 1; i < ((cnt/2) + 1); i++)
        {
            mover = mover->next;
        }
        return mover;
    }
};