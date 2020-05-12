class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;

    MinStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
		if(s2.empty() == true || s2.top() > x) {
			s2.push(x);
		} else {
			s2.push(s2.top());
		}
    }
    
    void pop() {
        
		if(s1.empty() == false) {
			s1.pop();
			s2.pop();
		}
    }
    
    int top() {
		return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
