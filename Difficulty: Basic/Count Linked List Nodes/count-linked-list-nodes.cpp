/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        Node* mover = head;
        int cnt = 0;
        while(mover != nullptr)
        {
            mover = mover->next;
            cnt++;
        }
        return cnt;
    }
};