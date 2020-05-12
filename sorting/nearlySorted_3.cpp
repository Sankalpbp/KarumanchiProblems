void kSortedUsingHeap(vector<int> &v, int n, int k) {
		
	// when we want to have min priority queue, we use greater<int>
	priority_queue<int, vector<int>, greater<int> > pq;

	for (int i = 0; i < k; ++i) {
		pq.push(v[i]);
	}

	for (int i = k; i < n; ++i) {
		v[i - k] = pq.top();
		pq.pop();
		pq.push(v[i]);
	}

	for (int i = n - k; i < n; ++i) {
		v[i] = pq.top();
		pq.pop();
	}
}
