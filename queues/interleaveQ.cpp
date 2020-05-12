void interleaveQ(queue<int> &q) {
		
	queue<int> q1, q2;
	int size = q.size() / 2;

	for(int i = 0; i < size; ++i) {
		q1.push(q.front());
		q.pop();
	}

	while(q.empty() == false) {
		q2.push(q.front());
		q.pop();
	}

	while(q1.empty() == false and q2.empty() == false) {
		q.push(q1.front());
		q1.pop();
		q.push(q2.front());
		q2.pop();
	}
}
