class MyStack {
public:
    /** Initialize your data structure here. */
	queue<int> q1;
	queue<int> q2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
		if(q1.empty() == true) {
			q2.push(x);
		} else {
			q1.push(x);
		}
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        
		if(q2.empty() == true) {
			while(q1.size() != 1) {
				q2.push(q1.front());
				q1.pop();
			}
			int answer = q1.front();
			q1.pop();
			return answer;
		}

		while(q2.size() != 1) {
			q1.push(q2.front());
			q2.pop();
		}
		int answer = q2.front();
		q2.pop();
		return answer;
    }
    
    /** Get the top element. */
    int top() {

		if(q2.empty() == true) {
			while(q1.size() != 1) {
				q2.push(q1.front());
				q1.pop();
			}

			return q1.front();
		}

		while(q2.size() != 1) {
			q1.push(q2.front());
			q2.pop();
		}

		return q2.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {

        return (q1.empty() == true and q2.empty() == true);
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
