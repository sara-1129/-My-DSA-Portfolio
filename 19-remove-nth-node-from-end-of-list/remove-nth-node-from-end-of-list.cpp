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

        ListNode* temp = head;
        int cnt = 0;
        while(temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        int nodeFromStart = cnt - n + 1;
        if(nodeFromStart == 1) {
            head = head->next;
            return head;
        }
        
        else {
            temp = head;
            ListNode* prev = nullptr;
            for(int i = 1; i < nodeFromStart; i++) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = prev->next->next;
            delete temp;
            return head;
        }


    return head;
    }
};