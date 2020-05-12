// the idea is to use the priority queue in such a way that the element that is 
// put in it latest, have the maximum priority

// so that, the latest push gives the latest pop

// here we are taking priority queue for granted

class node {
	public:
		int data;
		int priority;
};

class stack {
	int c = INT_MAX;
	// this is my own constructed data structure, this means that the priority_queue will consider the 
	// the node.priority for its arrangement
	priority_queue<node.priority> pq;

	void push(int element) {
		node a;
		a.priority = c;
		a.data = element;
		--c;

		pq.push(a);
	}

	void pop() {
		pq.pop();
	}

	int top() {
		return pq.front();
	}

	int size() {
		return pq.size();
	}

	bool empty() {
		return pq.empty();
	}
};
