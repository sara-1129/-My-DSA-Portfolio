/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        Node* temp = head;
        int cnt = 0;
        while(temp != nullptr) {
            temp = temp->next;
            cnt++;
        }
        Node* ans = head;
        for(int i = 1; i <= (cnt/2); i++)
        {
            ans = ans->next;
        }
        return ans->data;
    }
};