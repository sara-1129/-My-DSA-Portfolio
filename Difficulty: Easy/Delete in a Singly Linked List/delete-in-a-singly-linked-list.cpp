/* Link list Node
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
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head == nullptr)
        {
            return head;
        }
        else if (x == 1){
            head = head->next;
        }
        else
        {
            Node* mover1 = head;
            Node* mover2;
            for(int i = 1; i < x; i++)
            {
                mover2 = mover1;
                mover1 = mover1-> next;
            }
            mover2->next = mover1->next;
            mover1->next = nullptr;
        }
        return head;
        
    }
};