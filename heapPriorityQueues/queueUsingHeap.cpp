// here we will use the same idea as we have used in stack
// as the one enters must come outside first
// we will assign minimum priority to it

class node {
	public:
		int data;
		int priority;
};

class queue {
		
	int c = INT_MIN;
	priority_queue<node.priority> pq;

	public:
		
		void push(int element) {
			node a;
			a.data = element;
			a.priority = c;
			++c;
			pq.push(a);
		}

		void pop() {
			pq.pop();
		}

		int top() {
			return pq.top();
		}

		int size() {
			return pq.size();
		}

		bool empty() {
			return pq.empty();
		}
};
