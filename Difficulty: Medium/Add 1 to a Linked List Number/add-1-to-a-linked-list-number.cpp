/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* temp = head;
    while(temp != nullptr) {
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        Node* newHead = reverseList(head);
        Node* temp = newHead;
        Node* mover = nullptr;
        int carry = 1;
        while(temp != nullptr) {
            int sum = temp->data + carry;
            carry = sum / 10;
            temp->data = sum % 10;
            if(carry == 0) {
                break;
            }
            mover = temp;
            temp = temp->next;
        }
        if(carry != 0) {
            temp = new Node(carry);
            mover->next = temp;
        }
        
        head = reverseList(newHead);
        
        return head;
        
        // return head of list after adding one
    }
};