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
    bool isPalindrome(ListNode* head) {
        ListNode* mover = head;
        vector<int> temp;
        while(mover != nullptr)
        {
            temp.push_back(mover->val);
            mover = mover->next;
        }
        int low = 0;
        int high = temp.size() - 1;
        while(high > low)
        {
            if(temp[low] != temp[high])
            {
                return false;
            }

            high--;
            low++;
        }

        return true;

    }
};