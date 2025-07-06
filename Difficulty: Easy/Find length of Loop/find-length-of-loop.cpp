/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        
        Node* slow = head;
        Node* fast = head;
        Node* startingPoint = nullptr;
        bool detectloop = false;
        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                detectloop = true;
                break;
            }
        }
        if(!detectloop){
            return 0;
            
        }
        else
        {
            slow = head;
            while(fast != nullptr)
            {
                if(fast == slow)
                {
                    startingPoint = slow;
                    break;
                }
                slow = slow->next;
                fast = fast->next;           
            }
        }
        
        Node* mover = startingPoint->next;
        int cnt = 1;
        while(mover != startingPoint)
        {
            cnt++;
            mover = mover->next;
        }
        
        
        return cnt;
    }
};