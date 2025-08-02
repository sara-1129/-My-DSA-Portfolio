/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode* temp = new QueueNode(x);
        if(rear == nullptr)
        {
            front = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code   
        if(rear == nullptr)
        {
            return -1;
        }
        QueueNode* temp = front;
        int ele = temp->data;
        if(front == rear)
        {
            front = nullptr;
            rear = nullptr;
        }
        else
        {
            front = front->next;
        }
        delete temp;
        return ele;
}
