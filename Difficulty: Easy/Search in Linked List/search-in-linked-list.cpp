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
    bool searchKey(int n, Node* head, int key) {
        // Code here
        Node* mover = head;
        while(mover != nullptr) {
            if(mover->data == key) {
                return true;
            }
            mover = mover->next;
        }
        return false;
    }
};
