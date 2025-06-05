/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node * temp = new Node(x);
        if(head == nullptr) {
            head = temp;
        }
        else {
            Node* mover = head;
            while(mover-> next != nullptr)
            {
                mover = mover->next;
            }
            mover->next = temp;
        }
        return head;
    }
};