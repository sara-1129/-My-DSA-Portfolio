class MyStack {
public:
    queue <int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        int n = q.size();
        q.push(x);
        if(n >= 1)
        {
            for(int i = 0; i < n; i++)
            {
                q.push(q.front());
                q.pop();
            } 
        }

    }
    
    int pop() {
        int ele = q.front();
        q.pop();
        return ele;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.size() == 0) return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */