class MyQueue {
public:
    /** Initialize your data structure here. */
	stack<int> initial;
	stack<int> finally;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
		initial.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(finally.empty() == false) {
			int x = finally.top();
			finally.pop();
			return x;
		}

		while(initial.empty() == false) {
			finally.push(initial.top());
			initial.pop();
		}

		int x = finally.top();
		finally.pop();
		return x;
    }
    
    /** Get the front element. */
    int peek() {
        if(finally.empty() == false) {
			return finally.top();
		}

		while(initial.empty() == false) {
			finally.push(initial.top());
			initial.pop();
		}

		return finally.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (initial.empty() == true and finally.empty() == true);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
