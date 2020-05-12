void reveseStack(stack<int> & stck) {
	queue<int> q;

	while(stck.empty() == false) {
		q.push(stck.top());
		stck.pop();
	}

	while(q.empty() == false) {
		stck.push(q.front());
		q.pop();
	}
}
