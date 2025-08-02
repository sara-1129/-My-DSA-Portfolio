class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        StackNode* temp = new StackNode(x);
        if(top == nullptr) 
        {
            top = temp;
        }
        else
        {
            temp->next = top;
            top = temp;
        }
        
    }

    int pop() {
        if(top == nullptr)return -1;
        StackNode* temp = top;
        int ele = temp->data;
        top = top->next;
        delete temp;
        return ele;
        // code here
    }

    MyStack() { top = NULL; }
};

// class StackNode {
    //     int data;
    //     StackNode next;
    //     StackNode(int a) {
    //         data = a;
    //         next = null;
    //     }
    // }